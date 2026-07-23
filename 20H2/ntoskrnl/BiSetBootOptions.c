/*
 * XREFs of BiSetBootOptions @ 0x140975424
 * Callers:
 *     BiExportEfiBootManager @ 0x1409744A8 (BiExportEfiBootManager.c)
 * Callees:
 *     ZwSetBootOptions @ 0x1403FB290 (ZwSetBootOptions.c)
 *     BiLogMessage @ 0x140780FBC (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x140781E58 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140781EB0 (BiAcquirePrivilege.c)
 */

__int64 __fastcall BiSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = BiAcquirePrivilege(0x16u, (__int64)&v7);
  if ( v4 >= 0 )
  {
    v5 = ZwSetBootOptions(BootOptions, FieldsToChange);
    v4 = v5;
    if ( v5 < 0 )
      BiLogMessage(4LL, L"Failed to set boot options. Status: %x", (unsigned int)v5);
    BiReleasePrivilege((unsigned int *)&v7);
  }
  return (unsigned int)v4;
}
