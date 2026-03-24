/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x14095E984
 * Callers:
 *     PspSiloLoadApiSets @ 0x140906D14 (PspSiloLoadApiSets.c)
 * Callees:
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ApiSetReleaseSchema @ 0x1405BE588 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x1405BEC74 (ApiSetIsSchemaSealed.c)
 *     ApiSetLoadSchemaEx @ 0x14095E8B4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095EC94 (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x14095EF44 (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 v5; // rdx
  int SchemaExtensions; // ebx
  __int64 v7; // r8
  _DWORD *v8; // r9
  int v9; // eax
  ULONG_PTR v10; // rax
  SIZE_T v12; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR v14; // [rsp+58h] [rbp+28h] BYREF

  v12 = 0LL;
  Handle = (HANDLE)-1LL;
  v14 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v14, &v12);
  if ( SchemaExtensions >= 0 )
  {
    if ( !ApiSetIsSchemaSealed(v14) )
    {
      v9 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
      SchemaExtensions = v9;
      if ( v9 >= 0 )
      {
        SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
      }
      else if ( v9 == -1073741772 )
      {
        SchemaExtensions = 0;
      }
    }
    if ( SchemaExtensions >= 0 )
    {
      v10 = v14;
      v14 = 0LL;
      *a2 = v10;
      *a3 = v12;
    }
  }
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v14 )
    ApiSetReleaseSchema(v14, v5, v7, v8);
  return (unsigned int)SchemaExtensions;
}
