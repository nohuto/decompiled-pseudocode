/*
 * XREFs of ?GenerateNlsVkKey@@YAHPEAU_VK_TO_FUNCTION_TABLE@@GPEAUtagKE@@_K@Z @ 0x1C01ADF78
 * Callers:
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C01ADFD0 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1C01AE0B0 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GenerateNlsVkKey(
        struct _VK_TO_FUNCTION_TABLE *a1,
        unsigned __int16 a2,
        struct tagKE *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rdx

  result = 0LL;
  if ( !a1 )
    return 1LL;
  if ( a2 < 8u )
  {
    _mm_lfence();
    v6 = a2;
    v7 = *((unsigned __int8 *)a1 + 8 * a2 + 4);
    if ( (unsigned __int8)v7 < 0x10u )
      return ((__int64 (__fastcall *)(struct tagKE *, __int64, _QWORD))(&aNLSKEProc)[v7])(
               a3,
               a4,
               *((unsigned int *)a1 + 2 * v6 + 2));
  }
  return result;
}
