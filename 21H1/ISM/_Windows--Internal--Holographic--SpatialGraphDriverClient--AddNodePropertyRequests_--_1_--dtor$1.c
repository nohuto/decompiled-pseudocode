/*
 * XREFs of _Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor$1 @ 0x180159B4C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Func_class@X$$V@std@@QEAA@XZ @ 0x180069644 (--1-$_Func_class@X$$V@std@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverClient::AddNodePropertyRequests_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return std::_Func_class<void,>::~_Func_class<void,>(a2 + 144, a2);
  }
  return result;
}
