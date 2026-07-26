/*
 * XREFs of ?reset@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C0102A34
 * Callers:
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C010298C (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C010AA48 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116664 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall KRef<NDIS_BIND_FILTER_DRIVER>::reset(volatile signed __int32 **a1, volatile signed __int32 *a2)
{
  volatile signed __int32 *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v4 + 16, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
        result = KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v4);
    }
    *a1 = a2;
    if ( a2 )
      _InterlockedIncrement(a2 + 16);
  }
  return result;
}
