/*
 * XREFs of CmpDoFileWrite @ 0x1406A362C
 * Callers:
 *     CmpFileWrite @ 0x140618FF0 (CmpFileWrite.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087178C (CmpWriteOffsetArrayToFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     CmpSetIoPriorityThread @ 0x1402509A4 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1402509BC (CmpSetPriorityThread.c)
 *     CmpSetRespectIoPriorityThread @ 0x1402863F4 (CmpSetRespectIoPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402F03E0 (KeWaitForMultipleObjects.c)
 *     ZwWriteFile @ 0x1403FA680 (ZwWriteFile.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpCreateEvent @ 0x1406A3EE0 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileWrite(void *a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4, char a5)
{
  int v6; // edi
  ULONG v7; // esi
  char *TransientPoolWithTag; // rax
  char *v9; // rbx
  unsigned int v10; // eax
  _DWORD *v11; // r14
  char *Buffer; // rdi
  unsigned int v13; // ebp
  HANDLE *v14; // r12
  NTSTATUS Event; // edi
  ULONG Length; // r15d
  unsigned int v17; // ebp
  PADAPTER_OBJECT *v18; // rsi
  unsigned int v20; // ecx
  NTSTATUS *v21; // rax
  unsigned int v22; // [rsp+50h] [rbp-58h]
  KPRIORITY v23; // [rsp+58h] [rbp-50h]
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-48h] BYREF
  char *v25; // [rsp+68h] [rbp-40h]
  char v27; // [rsp+B8h] [rbp+10h]
  unsigned int v28; // [rsp+C8h] [rbp+20h]
  char v29; // [rsp+D8h] [rbp+30h]

  v28 = (unsigned int)a4;
  ByteOffset.QuadPart = 0LL;
  v27 = 0;
  v23 = 0;
  v6 = (int)a4;
  v7 = 0;
  TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(NonPagedPoolNx, 0x1400uLL, 0x77624D43u, a4);
  v9 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, 0x1400uLL);
    if ( (a5 & 1) != 0 )
    {
      CmpSetIoPriorityThread();
      v23 = CmpSetPriorityThread(KeGetCurrentThread(), 4);
      v27 = 1;
    }
    v29 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v10 = 0;
    v22 = 0;
    if ( v6 )
    {
      v11 = (_DWORD *)(a3 + 16);
      while ( 1 )
      {
        Buffer = (char *)*((_QWORD *)v11 - 1);
        v13 = *v11;
        ByteOffset.QuadPart = (unsigned int)*(v11 - 4);
        v25 = Buffer;
        if ( v13 )
          break;
LABEL_16:
        ++v10;
        v11 += 6;
        v22 = v10;
        if ( v10 >= v28 )
          goto LABEL_17;
      }
      while ( 1 )
      {
        v14 = (HANDLE *)&v9[8 * v7];
        if ( !*v14 )
        {
          Event = CmpCreateEvent(SynchronizationEvent);
          if ( Event < 0 )
            goto LABEL_18;
          Buffer = v25;
        }
        Length = 0x100000;
        if ( v13 < 0x100000 )
          Length = v13;
        if ( ZwWriteFile(a1, *v14, 0LL, 0LL, (PIO_STATUS_BLOCK)&v9[16 * v7 + 4096], Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v13 < 0x10000 )
            Length = v13;
          Event = ZwWriteFile(
                    a1,
                    *v14,
                    0LL,
                    0LL,
                    (PIO_STATUS_BLOCK)&v9[16 * v7 + 4096],
                    Buffer,
                    Length,
                    &ByteOffset,
                    0LL);
          if ( Event < 0 )
            goto LABEL_18;
          Buffer = v25;
        }
        v13 -= Length;
        ByteOffset.QuadPart += Length;
        Buffer += Length;
        ++v7;
        v25 = Buffer;
        if ( v7 == 64 )
          break;
LABEL_14:
        if ( !v13 )
        {
          v10 = v22;
          goto LABEL_16;
        }
      }
      KeWaitForMultipleObjects(0x40u, (PVOID *)v9 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v9 + 1024));
      v20 = 0;
      v21 = (NTSTATUS *)(v9 + 4096);
      v7 = 0;
      while ( 1 )
      {
        Event = *v21;
        if ( *v21 < 0 )
          break;
        ++v20;
        v21 += 4;
        if ( v20 >= 0x40 )
        {
          Buffer = v25;
          goto LABEL_14;
        }
      }
    }
    else
    {
LABEL_17:
      Event = 0;
LABEL_18:
      if ( v7 )
        KeWaitForMultipleObjects(v7, (PVOID *)v9 + 64, WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(v9 + 1024));
    }
    if ( v27 )
    {
      CmpSetIoPriorityThread();
      CmpSetPriorityThread(KeGetCurrentThread(), v23);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v29);
    v17 = 0;
    v18 = (PADAPTER_OBJECT *)v9;
    do
    {
      if ( !*v18 )
        break;
      HalPutDmaAdapter(v18[64]);
      ZwClose(*v18);
      ++v17;
      ++v18;
    }
    while ( v17 < 0x40 );
    CmSiFreeMemory((PPRIVILEGE_SET)v9);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
