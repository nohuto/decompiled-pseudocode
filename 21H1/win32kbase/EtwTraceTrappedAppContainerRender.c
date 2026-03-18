/*
 * XREFs of EtwTraceTrappedAppContainerRender @ 0x1C01562D0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C015601C (--0MALLOCOBJ@@QEAA@K@Z.c)
 *     McTemplateK0szsz_EtwWriteTransfer @ 0x1C0156830 (McTemplateK0szsz_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceTrappedAppContainerRender(PEPROCESS Process, PEPROCESS a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  PACCESS_TOKEN v6; // r15
  PACCESS_TOKEN v7; // rsi
  int v8; // eax
  char v9; // cl
  const WCHAR *v10; // rsi
  const WCHAR *v11; // r12
  void *ProcessImageFileName; // r14
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  const WCHAR *v17; // [rsp+40h] [rbp-20h] BYREF
  const WCHAR *v18; // [rsp+48h] [rbp-18h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF
  char v21; // [rsp+A0h] [rbp+40h] BYREF
  char v22; // [rsp+A8h] [rbp+48h] BYREF

  if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000) != 0 )
  {
    v19 = 256LL;
    v20 = 256LL;
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v18);
    MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v17);
    if ( v18 )
    {
      if ( !v17 )
      {
LABEL_22:
        if ( v18 )
          Win32FreePool((__int64)v18, v4, v5);
        return;
      }
      v22 = 0;
      v21 = 0;
      v6 = 0LL;
      v7 = PsReferencePrimaryToken(Process);
      RtlQueryPackageIdentity(v7, v18, &v19, 0LL, 0LL, &v22);
      PsDereferencePrimaryToken(v7);
      if ( a2 )
      {
        v6 = PsReferencePrimaryToken(a2);
        v8 = RtlQueryPackageIdentity(v6, v17, &v20, 0LL, 0LL, &v21);
        v9 = v21;
        if ( v8 < 0 )
          v9 = 0;
        v21 = v9;
      }
      else
      {
        v9 = v21;
      }
      if ( (Microsoft_Windows_Win32kEnableBits & 0x40000000) != 0 )
      {
        v10 = &word_1C0211C10;
        v11 = &word_1C0211C10;
        if ( v9 )
          v11 = v17;
        if ( a2 )
          ProcessImageFileName = (void *)PsGetProcessImageFileName(a2);
        else
          ProcessImageFileName = &unk_1C0225CC8;
        if ( v22 )
          v10 = v18;
        v13 = PsGetProcessImageFileName(Process);
        McTemplateK0szsz_EtwWriteTransfer(v15, v14, v16, v13, (__int64)v10, (__int64)ProcessImageFileName, (__int64)v11);
      }
      if ( v6 )
        PsDereferencePrimaryToken(v6);
    }
    if ( v17 )
      Win32FreePool((__int64)v17, v4, v5);
    goto LABEL_22;
  }
}
