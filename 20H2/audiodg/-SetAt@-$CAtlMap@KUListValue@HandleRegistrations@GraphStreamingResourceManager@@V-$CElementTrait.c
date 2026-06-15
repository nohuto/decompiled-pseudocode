/*
 * XREFs of ?SetAt@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAAPEAU__POSITION@@KAEBUListValue@HandleRegistrations@GraphStreamingResourceManager@@@Z @ 0x14000B344
 * Callers:
 *     ?RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z @ 0x140003B60 (-RegisterProcess@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUProcessRegistrationToken__@@@Z.c)
 *     ?RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z @ 0x140003C90 (-RegisterThread@GraphStreamingResourceManager@@UEAAJPEAXPEAPEAUThreadRegistrationToken__@@@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@AEAAPEAVCNode@12@KII@Z @ 0x14000B3D0 (-NewNode@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElementTra.c)
 *     ?InitHashTable@?$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@K@ATL@@V?$CElementTraits@UListValue@HandleRegistrations@GraphStreamingResourceManager@@@5@@ATL@@QEAA_NI_N@Z @ 0x14000B66C (-InitHashTable@-$CAtlMap@KUListValue@HandleRegistrations@GraphStreamingResourceManager@@V-$CElem.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DD6C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::SetAt(
        __int64 *a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  unsigned int v7; // r14d
  __int64 v8; // rcx
  __int64 result; // rax

  v3 = a3;
  v6 = a2 % *((_DWORD *)a1 + 4);
  v7 = a2 % *((_DWORD *)a1 + 4);
  v8 = *a1;
  if ( !v8 )
  {
    LOBYTE(a3) = 1;
    if ( !(unsigned __int8)ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::InitHashTable(
                             a1,
                             *((unsigned int *)a1 + 4),
                             a3) )
      ATL::AtlThrowImpl(-2147024882);
LABEL_3:
    result = ATL::CAtlMap<unsigned long,GraphStreamingResourceManager::HandleRegistrations::ListValue,ATL::CElementTraits<unsigned long>,ATL::CElementTraits<GraphStreamingResourceManager::HandleRegistrations::ListValue>>::NewNode(
               a1,
               a2,
               v7,
               a2);
    *(_OWORD *)(result + 8) = *(_OWORD *)v3;
    *(_QWORD *)(result + 24) = *(_QWORD *)(v3 + 16);
    return result;
  }
  for ( result = *(_QWORD *)(v8 + 8 * v6);
        result && (*(_DWORD *)(result + 40) != a2 || *(_DWORD *)result != a2);
        result = *(_QWORD *)(result + 32) )
  {
    ;
  }
  if ( !result )
    goto LABEL_3;
  *(_OWORD *)(result + 8) = *(_OWORD *)a3;
  *(_QWORD *)(result + 24) = *(_QWORD *)(a3 + 16);
  return result;
}
