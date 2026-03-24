/*
 * XREFs of ?IsCurrentThreadAppContainer@DXGPROCESS@@SA_NXZ @ 0x1C02858F8
 * Callers:
 *     ?AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z @ 0x1C02B0F44 (-AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT@@SAJW4_D3DKMT_DISPLAY_TARGET_USAGE@@_N@Z.c)
 * Callees:
 *     ?OpenCurrentThreadToken@DXGPROCESS@@SAJPEAPEAX@Z @ 0x1C02859EC (-OpenCurrentThreadToken@DXGPROCESS@@SAJPEAPEAX@Z.c)
 */

bool DXGPROCESS::IsCurrentThreadAppContainer(void)
{
  NTSTATUS v0; // eax
  int v1; // edx
  int TokenInformation; // [rsp+40h] [rbp+8h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+50h] [rbp+18h] BYREF

  TokenHandle = 0LL;
  TokenInformation = 1;
  if ( (int)DXGPROCESS::OpenCurrentThreadToken(&TokenHandle) >= 0 )
  {
    ReturnLength = 0;
    v0 = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength);
    v1 = TokenInformation;
    if ( v0 < 0 )
      v1 = 1;
    TokenInformation = v1;
    ZwClose(TokenHandle);
  }
  return TokenInformation != 0;
}
