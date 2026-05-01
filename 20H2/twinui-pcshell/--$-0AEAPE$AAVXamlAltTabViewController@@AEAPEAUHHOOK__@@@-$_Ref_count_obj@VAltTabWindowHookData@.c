/*
 * XREFs of ??$?0AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@?$_Ref_count_obj@VAltTabWindowHookData@@@std@@QEAA@AEAPE$AAVXamlAltTabViewController@@AEAPEAUHHOOK__@@@Z @ 0x18031DBE8
 * Callers:
 *     ??0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z @ 0x18031EA34 (--0AltTabWindowHook@@QEAA@PE$AAVXamlAltTabViewController@@@Z.c)
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Ref_count_obj<AltTabWindowHookData>::_Ref_count_obj<AltTabWindowHookData>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v4; // rbx
  __int64 v5; // rcx

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<AltTabWindowHookData>::`vftable';
  v4 = *a3;
  v5 = *a2;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 24) = Platform::Details::GetWeakReference(v5);
  *(_QWORD *)(a1 + 32) = v4;
  return a1;
}
