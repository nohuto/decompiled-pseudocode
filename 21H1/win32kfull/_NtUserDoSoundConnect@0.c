/*
 * XREFs of _NtUserDoSoundConnect@0 @ 0xEC128
 * Callers:
 *     <none>
 * Callees:
 *     ?Connect@CUserPlaySound@@AAEJPAX@Z @ 0xEA274 (-Connect@CUserPlaySound@@AAEJPAX@Z.c)
 *     ?Disconnect@CUserPlaySound@@AAEJXZ @ 0xEC2DE (-Disconnect@CUserPlaySound@@AAEJXZ.c)
 */

int __thiscall NtUserDoSoundConnect(CUserPlaySound *this)
{
  NTSTATUS v1; // esi
  NTSTATUS v2; // eax
  void **v3; // edi
  CUserPlaySound *v4; // ecx
  ULONG ReturnLength; // [esp+8h] [ebp-8h] BYREF
  HANDLE TokenHandle; // [esp+Ch] [ebp-4h] BYREF

  ReturnLength = 0;
  TokenHandle = 0;
  CUserPlaySound::Disconnect(this);
  v1 = OpenEffectiveToken(&TokenHandle);
  if ( v1 >= 0 )
  {
    v2 = ZwQueryInformationToken(TokenHandle, TokenUser, 0, 0, &ReturnLength);
    v1 = v2;
    if ( v2 == -1073741789 || v2 >= 0 )
    {
      v3 = (void **)Win32AllocPool(ReturnLength, 1869902677);
      if ( v3 )
      {
        v1 = ZwQueryInformationToken(TokenHandle, TokenUser, v3, ReturnLength, &ReturnLength);
        ZwClose(TokenHandle);
        if ( v1 >= 0 )
          v1 = CUserPlaySound::Connect(v4, *v3);
        Win32FreePool(v3);
      }
      else
      {
        ZwClose(TokenHandle);
        return -1073741801;
      }
    }
    else
    {
      ZwClose(TokenHandle);
    }
  }
  return v1;
}
