/*
 * XREFs of ?RmGameModeCpuSetManagerReleaseProcessRegistration@@YAJPEAX0_K@Z @ 0x180062F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmGameModeCpuSetManagerReleaseProcessRegistration(
        void *a1,
        struct _RM_CPU_SET_CLIENT_CONTEXT *a2,
        unsigned __int64 a3)
{
  return RmSrvCpuSetManagerReleaseProcessRegistration(a2, a3);
}
