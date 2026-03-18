/*
 * XREFs of AMLIAddNextNamespaceOverride @ 0x1C0064694
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x1C0064694 (AMLIAddNextNamespaceOverride.c)
 *     AMLIInitialize @ 0x1C00BCBA0 (AMLIInitialize.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00039E4 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006360 (CreateNameSpaceObject.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     AMLIAddNextNamespaceOverride @ 0x1C0064694 (AMLIAddNextNamespaceOverride.c)
 *     AMLIAddNextNamespaceOverrideObject @ 0x1C00647FC (AMLIAddNextNamespaceOverrideObject.c)
 *     AMLIGetValidNamespaceName @ 0x1C0064DFC (AMLIGetValidNamespaceName.c)
 *     OSCloseHandle @ 0x1C00969FC (OSCloseHandle.c)
 *     OSOpenNextSubkey @ 0x1C00B2948 (OSOpenNextSubkey.c)
 *     OSReadNextRegValue @ 0x1C00B2B8C (OSReadNextRegValue.c)
 */

__int64 __fastcall AMLIAddNextNamespaceOverride(void *a1, __int64 a2)
{
  ULONG v4; // edi
  int RegValue; // ebx
  ULONG v6; // esi
  int Subkey; // edi
  int v8; // edx
  unsigned int v10; // [rsp+28h] [rbp-38h]
  HANDLE KeyHandle; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int8 v13[8]; // [rsp+48h] [rbp-18h] BYREF

  v12 = 0LL;
  KeyHandle = 0LL;
  v4 = 0;
  do
  {
    RegValue = OSReadNextRegValue(a1, v4, v13);
    if ( RegValue >= 0 )
      RegValue = AMLIAddNextNamespaceOverrideObject(a1, a2, v13);
    ++v4;
  }
  while ( !RegValue );
  if ( RegValue < 0 )
  {
    if ( RegValue == -2147483622 )
    {
      v6 = 0;
      do
      {
        Subkey = OSOpenNextSubkey(a1, v6, v13, (__int64)&KeyHandle);
        if ( Subkey >= 0 )
        {
          RegValue = AMLIGetValidNamespaceName(v13, 0LL);
          if ( RegValue < 0 )
            goto LABEL_20;
          Subkey = CreateNameSpaceObject(gpheapGlobal, v13, a2, *(struct _EX_RUNDOWN_REF **)(a2 + 48), &v12, v8 & v10);
          if ( Subkey >= 0 )
          {
            Subkey = AMLIAddNextNamespaceOverride(KeyHandle, v12);
            DereferenceObjectEx(v12);
          }
          OSCloseHandle(KeyHandle);
          KeyHandle = 0LL;
        }
        ++v6;
      }
      while ( !Subkey );
      if ( Subkey == -2147483622 )
      {
        RegValue = 0;
      }
      else
      {
        if ( Subkey >= 0 )
          Subkey = -1073741823;
        RegValue = Subkey;
      }
    }
  }
  else
  {
    RegValue = -1073741823;
  }
LABEL_20:
  if ( KeyHandle )
    OSCloseHandle(KeyHandle);
  return (unsigned int)RegValue;
}
