/*
 * XREFs of ?v_GetAdditionalDataSizeMax@CFTMCrossProcClientImpl@@MEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x180043950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFTMCrossProcClientImpl::v_GetAdditionalDataSizeMax(
        CFTMCrossProcClientImpl *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  *a7 = *((_DWORD *)this + 8);
  return *((_QWORD *)this + 10) == 0LL ? 0x8000FFFF : 0;
}
