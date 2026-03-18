/*
 * XREFs of PiSwPropertySet @ 0x14076E714
 * Callers:
 *     PiSwIrpPropertySet @ 0x140762C04 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14076308C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14076426C (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpInterfacePropertySet @ 0x14084F808 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PiPnpRtlSetObjectProperty @ 0x140771524 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     _PnpOpenObjectRegKey @ 0x14077C924 (_PnpOpenObjectRegKey.c)
 */

__int64 __fastcall PiSwPropertySet(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  int v11; // eax
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation(&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(PiPnpRtlCtx, a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (_QWORD *)(a3 + 40);
        do
        {
          v11 = PiPnpRtlSetObjectProperty(
                  *(_QWORD *)&PiPnpRtlCtx,
                  a1,
                  a2,
                  Handle,
                  *(v10 - 2),
                  v10 - 5,
                  *((_DWORD *)v10 - 2),
                  *v10,
                  *((_DWORD *)v10 - 1),
                  0);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v8;
}
