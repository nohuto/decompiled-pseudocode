/*
 * XREFs of PiSwPropertySet @ 0x14072D9E8
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x140752F94 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x140753438 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x140753958 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpPropertySet @ 0x140775DB4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407A7544 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     PiPnpRtlEndOperation @ 0x1406A5E98 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406A6604 (PiPnpRtlBeginOperation.c)
 *     _PnpOpenObjectRegKey @ 0x1406A97E4 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlSetObjectProperty @ 0x14072AE1C (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiSwPropertySet(const WCHAR *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  const wchar_t **v10; // rdi
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  PVOID P; // [rsp+58h] [rbp-20h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation(&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (const wchar_t **)(a3 + 40);
        do
        {
          v8 = PiPnpRtlSetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 a1,
                 a2,
                 (__int64)Handle,
                 (__int64)*(v10 - 2),
                 (__int64)(v10 - 5),
                 *((_DWORD *)v10 - 2),
                 *v10,
                 *((_DWORD *)v10 - 1),
                 0);
          if ( v8 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          if ( v8 < 0 )
            break;
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
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
