/*
 * XREFs of _WPP_RECORDER_SF_qsqs@36 @ 0x1A192
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1A0DC (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     <none>
 */

int __stdcall WPP_RECORDER_SF_qsqs(int a1, int a2, int a3, char a4, const char *a5, char a6, unsigned int a7)
{
  const char *v7; // esi
  const char *v8; // edi
  unsigned int v9; // ecx
  const char *v11; // edx
  const char *v12; // eax
  struct RECORDER_LOG__ *v13; // [esp+Ch] [ebp-4h]

  v7 = (const char *)a7;
  v13 = gFullLog;
  v8 = a5;
  v9 = 5;
  if ( (WPP_GLOBAL_Control->Characteristics & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Flags) >= 4u )
  {
    if ( a7 )
    {
      a7 = strlen((const char *)a7) + 1;
      v9 = 5;
    }
    else
    {
      a7 = 5;
    }
    v11 = v7;
    if ( !v7 )
      v11 = "NULL";
    if ( a5 )
    {
      v9 = strlen(a5) + 1;
      v12 = a5;
    }
    else
    {
      v12 = "NULL";
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      WPP_GLOBAL_Control->CurrentIrp,
      43,
      &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids,
      10,
      &a4,
      4,
      v12,
      v9,
      &a6,
      4,
      v11);
    v9 = 5;
  }
  if ( v7 )
  {
    strlen(v7);
    v9 = 5;
  }
  else
  {
    v7 = "NULL";
  }
  if ( v8 )
    v9 = strlen(v8) + 1;
  else
    v8 = "NULL";
  return _WppAutoLogTrace(v13, 4, 2, &WPP_7679130e9343316c2b67b07ec3410afc_Traceguids, 10, &a4, 4, v8, v9, &a6, 4, v7);
}
