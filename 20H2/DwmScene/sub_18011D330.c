/*
 * XREFs of sub_18011D330 @ 0x18011D330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011CF24 @ 0x18011CF24 (sub_18011CF24.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall sub_18011D330(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  int result; // eax
  _QWORD pExceptionObject[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v3 = Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v3 )
    goto LABEL_5;
  if ( *(_BYTE *)(a1 + 112) )
    goto LABEL_6;
  result = Mtx_unlock(v2);
  if ( result )
  {
    std::_Throw_C_error(result);
LABEL_5:
    std::_Throw_C_error(v3);
LABEL_6:
    sub_18011CF24(pExceptionObject, v4, v5);
    throw (Spectre::Utils::CancelledException *)pExceptionObject;
  }
  return result;
}
