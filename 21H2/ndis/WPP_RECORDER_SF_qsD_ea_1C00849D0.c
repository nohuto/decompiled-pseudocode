/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C00849D0
 * Callers:
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1C0083320 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C00AB4A4 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qsD(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const char *v10; // rax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  const char *v15; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v13 = va_arg(va1, _QWORD);
  v15 = va_arg(va1, const char *);
  v5 = v15;
  v6 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( v15 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v15[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = v15;
    if ( !v15 )
      v10 = "NULL";
    ndisWppFastTraceMessage(&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids, 0x9Cu, va, 8LL, v10, v9, va1, 4LL, 0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
  }
  LOWORD(v12) = 156;
  return WppAutoLogTrace(a1, 2LL, 14LL, &WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids, v12, (__int64 *)va);
}
