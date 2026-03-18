/*
 * XREFs of ?GetFloatAnimatableProperty@CMatrixTransform3DMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x1C01DDFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CMatrixTransform3DMarshaler::GetFloatAnimatableProperty(
        DirectComposition::CMatrixTransform3DMarshaler *this,
        unsigned int a2,
        float *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 >= 0x10 )
    return 3221225485LL;
  *a3 = *((float *)this + a2 + 18);
  return result;
}
