/*
 * XREFs of MiLoadImportDll @ 0x1407AC5E0
 * Callers:
 *     MiResolveImageReferences @ 0x14075D3CC (MiResolveImageReferences.c)
 * Callees:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiFreeDriverInitialization @ 0x14075ED74 (MiFreeDriverInitialization.c)
 *     MmUnloadSystemImage @ 0x140772310 (MmUnloadSystemImage.c)
 *     MmCallDllInitialize @ 0x1407AC690 (MmCallDllInitialize.c)
 */

__int64 __fastcall MiLoadImportDll(__int64 a1, __int64 a2, int a3, ULONG_PTR *a4, _QWORD *a5)
{
  char v6; // si
  int v7; // edi
  ULONG_PTR v8; // rbx
  ULONG_PTR v9; // rcx
  __int64 v10; // rdx
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-10h] BYREF

  BugCheckParameter2 = 0LL;
  v13 = 0LL;
  v6 = a3;
  v7 = MmLoadSystemImageEx(a1, a2, 0LL, a3 | 8u, &BugCheckParameter2, &v13);
  if ( v7 >= 0 )
  {
    v8 = BugCheckParameter2;
    v9 = BugCheckParameter2;
    *(_DWORD *)(BugCheckParameter2 + 104) |= 0x4000000u;
    v7 = MmCallDllInitialize(v9, &PsLoadedModuleList);
    if ( v7 < 0 )
    {
      MmUnloadSystemImage(v8, v10);
    }
    else
    {
      if ( (v6 & 1) == 0 )
        MiFreeDriverInitialization(v8);
      *a4 = BugCheckParameter2;
      *a5 = v13;
    }
  }
  return (unsigned int)v7;
}
