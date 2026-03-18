/*
 * XREFs of ?CitpContextResetTrackingValues@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C009CF34
 * Callers:
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C009CE0C (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01F7724 (-CitpContextReinitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CitpContextResetTrackingValues(union _LARGE_INTEGER *a1, DWORD a2)
{
  union _LARGE_INTEGER v4; // rax
  union _LARGE_INTEGER v5; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v6; // [rsp+40h] [rbp+18h] BYREF

  v5.QuadPart = 0LL;
  v6.QuadPart = MEMORY[0xFFFFF78000000014];
  ExSystemTimeToLocalTime(&v6, &v5);
  v4 = v5;
  a1[17].LowPart = a2;
  a1[109].LowPart = a2;
  a1[32] = v4;
  a1[108].QuadPart = MEMORY[0xFFFFF78000000014];
}
