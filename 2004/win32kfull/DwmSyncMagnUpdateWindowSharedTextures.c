/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0276760
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01CD4A0 (MagGetLensContextInformation.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C003E158 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     memset @ 0x1C015C000 (memset.c)
 */

__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        void *a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        ULONG a7,
        ULONG a8,
        ULONG *a9,
        ULONG *a10)
{
  signed int v14; // edi
  __int128 v15; // xmm1
  int v16; // eax
  signed int ZeroInit; // ecx
  ULONG *v18; // rbx
  ULONG DoNotUseThisField_low; // ecx
  __int64 v20; // rdx
  HANDLE v21; // rcx
  PVOID v23; // [rsp+48h] [rbp-79h] BYREF
  __int64 v24; // [rsp+50h] [rbp-71h] BYREF
  struct _PORT_MESSAGE v25[3]; // [rsp+58h] [rbp-69h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+37h] BYREF

  v14 = -1073741823;
  if ( Object )
  {
    v14 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v25, 0, 0x74uLL);
      v25[0].u1.Length = 7602252;
      v25[0].u2.s2.Type = 0x8000;
      v25[1].u2.ZeroInit = a7;
      v25[2].CallbackId = a8;
      *(_QWORD *)&v25[2].MessageId = a6;
      v25[1].u1.Length = 1073741924;
      v25[2].ClientId.UniqueProcess = a3;
      v25[2].ClientId.UniqueThread = a4;
      v15 = *(_OWORD *)(a5 + 16);
      v25[1].8 = *(union _PORT_MESSAGE::$C6BC508B531A81D74C33985719C23F49 *)a5;
      *(_QWORD *)&v25[2].u1.s1.DataLength = *(_QWORD *)(a5 + 32);
      *(_OWORD *)&v25[1].MessageId = v15;
      EtwUpdateEvent(0LL);
      v24 = 116LL;
      v16 = LpcSendWaitReceivePort(Object, 0x20000LL, v25, v25, &v24, 0LL);
      v14 = SyncLpcCheckNtStatus(v16, v25);
      if ( v14 >= 0 )
      {
        ZeroInit = v25[1].u2.ZeroInit;
        v18 = a9;
        *a9 = v25[1].u2.ZeroInit;
        if ( ZeroInit < 0 )
        {
          v18[1] = 0;
          v18[2] = 0;
        }
        else
        {
          DoNotUseThisField_low = LODWORD(v25[1].DoNotUseThisField);
          v18[1] = v25[1].MessageId;
          *(_QWORD *)(v18 + 3) = *(_QWORD *)(&v25[1].MessageId + 1);
          v18[5] = *(&v25[1].CallbackId + 1);
          v18[2] = DoNotUseThisField_low;
          if ( DoNotUseThisField_low )
          {
            v20 = *(_QWORD *)((char *)&v25[1].DoNotUseThisField + 4);
            Handle = 0LL;
            v18[9] = *((_DWORD *)&v25[1].DoNotUseThisField + 3);
            if ( (int)ObDuplicateObject(a2, v20, 0LL, &Handle, 4, 512, 1, 0) >= 0 )
            {
              v23 = 0LL;
              ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &v23, 0LL);
              v21 = Handle;
              *((_QWORD *)v18 + 5) = v23;
              ZwClose(v21);
            }
          }
          else
          {
            *((_QWORD *)v18 + 5) = 0LL;
            v18[9] = 0;
          }
          v14 = 0;
          *a10 = v25[2].u1.Length;
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v14;
}
