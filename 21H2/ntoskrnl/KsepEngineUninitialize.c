/*
 * XREFs of KsepEngineUninitialize @ 0x140A931C8
 * Callers:
 *     KseInitialize @ 0x140A3D89C (KseInitialize.c)
 * Callees:
 *     RtlAssert @ 0x140588A40 (RtlAssert.c)
 *     KsepCacheUninitialize @ 0x1408C1290 (KsepCacheUninitialize.c)
 */

void __fastcall KsepEngineUninitialize(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( !a1 )
  {
    v2 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v2 + 1] = -1073740768;
    KsepHistoryErrors[2 * v2] = 131953;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("Engine != NULL", "minkernel\\ntos\\kshim\\ksecore.c", 0x371u, 0LL);
  }
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 )
  {
    KsepCacheUninitialize(v3);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  *(_DWORD *)a1 |= 3u;
  *(_DWORD *)(a1 + 8) |= 0x400u;
}
