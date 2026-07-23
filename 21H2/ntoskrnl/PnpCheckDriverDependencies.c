/*
 * XREFs of PnpCheckDriverDependencies @ 0x1408A1BA8
 * Callers:
 *     PipProcessPendingObjects @ 0x140A920E0 (PipProcessPendingObjects.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x140637618 (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCheckDriverDependencies(wchar_t *Str1, _BYTE *a2, __int64 a3)
{
  char v5; // si
  int CachedContextBaseKey; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-18h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+50h] BYREF
  int v21; // [rsp+A8h] [rbp+58h] BYREF

  v20 = a3;
  *a2 = 0;
  v18 = 0LL;
  v5 = 0;
  v17 = 0LL;
  Handle = 0LL;
  v15 = 0;
  v19 = 0;
  v21 = 0;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v18);
  if ( CachedContextBaseKey >= 0 )
  {
    for ( ; *Str1; Str1 += v14 + 1 )
    {
      if ( !wcsicmp(Str1, L"*") || v5 )
        goto LABEL_36;
      if ( !v17 )
      {
        v7 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v7 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        v8 = SysCtxRegOpenKey(v7, v18, (__int64)L"Control\\FirmwareResources", 0, 0x20019u, (__int64)&v17);
        CachedContextBaseKey = v8;
        if ( v8 == -1073741772 || v8 == -1073741444 )
        {
          v5 = 1;
LABEL_35:
          CachedContextBaseKey = 0;
          goto LABEL_36;
        }
        if ( v8 < 0 )
          goto LABEL_29;
      }
      if ( Handle )
      {
        ZwClose(Handle);
        Handle = 0LL;
      }
      v9 = 0LL;
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      v10 = SysCtxRegOpenKey(v9, (__int64)v17, (__int64)Str1, 0, 1u, (__int64)&Handle);
      CachedContextBaseKey = v10;
      if ( v10 == -1073741772 || v10 == -1073741444 )
        goto LABEL_35;
      if ( v10 < 0 )
        goto LABEL_29;
      LODWORD(v20) = 4;
      v11 = RegRtlQueryValue(Handle, L"Phase", &v21, &v19, (unsigned int *)&v20);
      CachedContextBaseKey = v11;
      if ( v11 == -1073741772 )
      {
        CachedContextBaseKey = 0;
        goto LABEL_27;
      }
      if ( v11 == -1073741444 )
        goto LABEL_35;
      if ( v11 < 0 )
        goto LABEL_29;
      if ( v19 != 2 )
        break;
      LODWORD(v20) = 4;
      v12 = RegRtlQueryValue(Handle, L"LastAttemptStatus", &v21, &v15, (unsigned int *)&v20);
      CachedContextBaseKey = v12;
      if ( v12 == -1073741772 )
      {
        CachedContextBaseKey = 0;
        break;
      }
      if ( v12 == -1073741444 )
        goto LABEL_35;
      if ( v12 < 0 )
        goto LABEL_29;
      if ( v15 )
        break;
LABEL_36:
      v14 = -1LL;
      do
        ++v14;
      while ( Str1[v14] );
    }
    if ( CachedContextBaseKey >= 0 )
    {
LABEL_27:
      if ( !*Str1 )
        *a2 = 1;
    }
  }
LABEL_29:
  if ( v17 )
    ZwClose(v17);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)CachedContextBaseKey;
}
