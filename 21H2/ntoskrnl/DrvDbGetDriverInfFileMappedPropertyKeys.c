/*
 * XREFs of DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097DB84
 * Callers:
 *     DrvDbDispatchDriverInfFile @ 0x140630540 (DrvDbDispatchDriverInfFile.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x14062FE24 (DrvDbOpenDriverInfFileRegKey.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14097D42C (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverInfFileMappedPropertyKeys(
        __int64 a1,
        int a2,
        HANDLE a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int *v6; // r14
  unsigned int v8; // r12d
  __int64 v10; // rdi
  int v11; // ebp
  signed int CompositeMappedPropertyKeys; // ebx
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 (**v17)[3]; // rsi
  unsigned int i; // r15d
  const WCHAR *v19; // rdx
  signed int Value; // eax
  __int64 *v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // edx
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int *v27; // [rsp+28h] [rbp-40h]
  HANDLE Handle[2]; // [rsp+30h] [rbp-38h] BYREF

  v6 = (unsigned int *)a6;
  v8 = a5;
  Handle[0] = 0LL;
  v27 = (unsigned int *)a6;
  *(_DWORD *)a6 = 0;
  v10 = a4;
  v11 = a1;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(a1, (_OWORD **)off_140C0F120, 1u, a4, a5, v27);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v15 = *v6;
    if ( (_DWORD)v15 )
    {
      if ( v14 )
        v10 = v14 + 20 * v15;
      v8 = a5 - v15;
    }
    if ( a3 )
      goto LABEL_9;
    CompositeMappedPropertyKeys = DrvDbOpenDriverInfFileRegKey(v11, a2, v13, 0, (__int64)Handle, 0LL);
    if ( CompositeMappedPropertyKeys >= 0 )
    {
      a3 = Handle[0];
LABEL_9:
      v16 = 0LL;
      v17 = &off_140004010;
      for ( i = 0; i < 4; ++i )
      {
        v19 = (const WCHAR *)v17[2];
        LODWORD(a6) = 0;
        Value = RegRtlQueryValue(a3, v19, 0LL, 0LL, (unsigned int *)&a6);
        CompositeMappedPropertyKeys = Value;
        if ( Value == -1073741772 )
        {
          CompositeMappedPropertyKeys = 0;
        }
        else
        {
          if ( Value && Value != -1073741789 )
            break;
          if ( v10 && (unsigned int)v16 < v8 )
          {
            v21 = (__int64 *)*v17;
            v22 = 5 * v16;
            v16 = (unsigned int)(v16 + 1);
            *(_OWORD *)(v10 + 4 * v22) = *(_OWORD *)*v17;
            *(_DWORD *)(v10 + 4 * v22 + 16) = *((_DWORD *)v21 + 4);
          }
          v23 = *v6;
          v24 = -1;
          v25 = *v6 + 1;
          if ( v25 >= *v6 )
            v24 = *v6 + 1;
          CompositeMappedPropertyKeys = v25 < v23 ? 0xC0000095 : 0;
          *v6 = v24;
          if ( v25 < v23 )
          {
            *v6 = 0;
            break;
          }
        }
        v17 += 5;
      }
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return (unsigned int)CompositeMappedPropertyKeys;
}
