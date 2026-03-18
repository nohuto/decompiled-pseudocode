/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C0054E2C
 * Callers:
 *     ExternalRequestBiosNameDeviceAssociation @ 0x1C00AF3B4 (ExternalRequestBiosNameDeviceAssociation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6, const char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rdx
  const char *v11; // rcx
  int v13; // [rsp+20h] [rbp-48h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a7[v10] );
    }
    v11 = a7;
    if ( !a7 )
      v11 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids,
      13LL,
      &a6,
      8LL,
      v11);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v13) = 13;
  return WppAutoLogTrace(a1, 2LL, 21LL, &WPP_8cd4999731163fb3621cd0c511e30926_Traceguids, v13, &a6);
}
