/*
 * XREFs of RunMethodCallBack @ 0x1C0067DB0
 * Callers:
 *     DebugRunMethod @ 0x1C00676F0 (DebugRunMethod.c)
 * Callees:
 *     GetObjectPath @ 0x1C00282F8 (GetObjectPath.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     DumpObject @ 0x1C0068B08 (DumpObject.c)
 */

void __fastcall RunMethodCallBack(__int64 *a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  _BYTE *v5; // rax
  void *v6; // rdx
  void *v7; // rbx
  __int64 v8; // rdx
  _BYTE *ObjectPath; // rax
  const char *v10; // rdx
  void *v11; // rbx

  v3 = *a1;
  if ( a2 )
  {
    if ( dword_1C0081AC8 )
    {
      ObjectPath = GetObjectPath(v3);
      v10 = (const char *)&unk_1C006FB8B;
      v11 = ObjectPath;
      if ( ObjectPath )
        v10 = ObjectPath;
      ConPrintf("\n%s failed with the following error:\n%s\n", v10, byte_1C0081ACC);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
    }
  }
  else
  {
    v5 = GetObjectPath(v3);
    v6 = &unk_1C006FB8B;
    v7 = v5;
    if ( v5 )
      v6 = v5;
    ConPrintf("\n%s completed successfully with object data:\n", v6);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    DumpObject(a3, v8, 0LL);
  }
  fRunningMethod = 0;
}
