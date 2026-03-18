/*
 * XREFs of ApiSetLoadSchemaWithExtensions @ 0x140959FA4
 * Callers:
 *     PspSiloLoadApiSets @ 0x140902B34 (PspSiloLoadApiSets.c)
 * Callees:
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ApiSetReleaseSchema @ 0x1405B88B8 (ApiSetReleaseSchema.c)
 *     ApiSetIsSchemaSealed @ 0x1405B8FA4 (ApiSetIsSchemaSealed.c)
 *     ApiSetLoadSchemaEx @ 0x140959ED4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14095A2B4 (ApiSetpLoadSchemaExtensions.c)
 *     ApiSetpOpenSchemaExtensionsRootNode @ 0x14095A564 (ApiSetpOpenSchemaExtensionsRootNode.c)
 */

__int64 __fastcall ApiSetLoadSchemaWithExtensions(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  int SchemaExtensions; // ebx
  int v6; // eax
  ULONG_PTR v7; // rax
  SIZE_T v9; // [rsp+20h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR v11; // [rsp+58h] [rbp+28h] BYREF

  v9 = 0LL;
  Handle = (HANDLE)-1LL;
  v11 = 0LL;
  SchemaExtensions = ApiSetLoadSchemaEx(a1, &v11, &v9);
  if ( SchemaExtensions >= 0 )
  {
    if ( !ApiSetIsSchemaSealed(v11) )
    {
      v6 = ApiSetpOpenSchemaExtensionsRootNode(&Handle);
      SchemaExtensions = v6;
      if ( v6 >= 0 )
      {
        SchemaExtensions = ApiSetpLoadSchemaExtensions(Handle);
      }
      else if ( v6 == -1073741772 )
      {
        SchemaExtensions = 0;
      }
    }
    if ( SchemaExtensions >= 0 )
    {
      v7 = v11;
      v11 = 0LL;
      *a2 = v7;
      *a3 = v9;
    }
  }
  if ( Handle != (HANDLE)-1LL )
    ZwClose(Handle);
  if ( v11 )
    ApiSetReleaseSchema(v11);
  return (unsigned int)SchemaExtensions;
}
