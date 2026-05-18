/*
 * XREFs of ?equivalent@error_category@std@@UEBA_NAEBVerror_code@2@H@Z @ 0x180031710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall std::error_category::equivalent(std::error_category *this, const struct std::error_code *a2, int a3)
{
  return *((_QWORD *)this + 1) == *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL) && *(_DWORD *)a2 == a3;
}
