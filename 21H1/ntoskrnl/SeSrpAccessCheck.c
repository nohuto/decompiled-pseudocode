/*
 * XREFs of SeSrpAccessCheck @ 0x140590380
 * Callers:
 *     <none>
 * Callees:
 *     SepCommonAccessCheckEx @ 0x14037014C (SepCommonAccessCheckEx.c)
 */

__int64 __fastcall SeSrpAccessCheck(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  return SepCommonAccessCheckEx(a1, a2, a3, a4, a5, a6, 1);
}
