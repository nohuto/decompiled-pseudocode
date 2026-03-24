/*
 * XREFs of KiLoadPolicyFromImage @ 0x1409A0D20
 * Callers:
 *     KiIntersectFeaturesWithPolicy @ 0x1409A0B30 (KiIntersectFeaturesWithPolicy.c)
 * Callees:
 *     KeHwPolicyLocateResource @ 0x140A65230 (KeHwPolicyLocateResource.c)
 */

__int64 __fastcall KiLoadPolicyFromImage(int a1, _QWORD *a2, _QWORD *a3)
{
  int v4; // edi
  __int64 result; // rax

  *a2 = 0LL;
  *a3 = 0LL;
  v4 = (int)a2;
  result = KeHwPolicyLocateResource(a1, 101, KeXSavePolicyId, (_DWORD)a2, (__int64)a3);
  if ( (int)result < 0 && KeXSavePolicyId != 1 )
  {
    KeXSavePolicyId = 1LL;
    return KeHwPolicyLocateResource(a1, 101, 1, v4, (__int64)a3);
  }
  return result;
}
