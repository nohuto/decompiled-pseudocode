/*
 * XREFs of ?Acquire@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C001E3D4
 * Callers:
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C001E3A4 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     DpiMiracastQueryMiracastSupportForFDO @ 0x1C0171934 (DpiMiracastQueryMiracastSupportForFDO.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001E440 (DpiCheckForOutstandingD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0169D94 (DpiDisableD3Requests.c)
 */

void __fastcall AUTO_PNPPOWER_LOCK::Acquire(AUTO_PNPPOWER_LOCK *this)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( !*((_BYTE *)this + 10) )
  {
    v2 = *((_BYTE *)this + 9);
    if ( !*((_BYTE *)this + 8) )
    {
      if ( v2 )
      {
        KeEnterCriticalRegion();
        v3 = *(_QWORD *)this;
        if ( !*(_BYTE *)(*(_QWORD *)this + 484LL) )
          goto LABEL_7;
        DpiDisableD3Requests(*(_QWORD *)(v3 + 24));
      }
      else
      {
        KeEnterCriticalRegion();
        v3 = *(_QWORD *)this;
        if ( !*(_BYTE *)(*(_QWORD *)this + 484LL) )
        {
LABEL_7:
          ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 168), 1u);
LABEL_8:
          *((_BYTE *)this + 10) = 1;
          return;
        }
        DpiCheckForOutstandingD3Requests(v3);
      }
      v3 = *(_QWORD *)this;
      goto LABEL_7;
    }
    if ( v2 )
    {
      KeEnterCriticalRegion();
      v4 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 484LL) )
      {
        DpiDisableD3Requests(*(_QWORD *)(v4 + 24));
LABEL_15:
        v4 = *(_QWORD *)this;
      }
    }
    else
    {
      KeEnterCriticalRegion();
      v4 = *(_QWORD *)this;
      if ( *(_BYTE *)(*(_QWORD *)this + 484LL) )
      {
        DpiCheckForOutstandingD3Requests(v4);
        goto LABEL_15;
      }
    }
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v4 + 168), 1u);
    goto LABEL_8;
  }
}
