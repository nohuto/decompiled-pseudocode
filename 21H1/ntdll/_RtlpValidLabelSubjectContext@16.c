/*
 * XREFs of _RtlpValidLabelSubjectContext@16 @ 0x4B34A22A
 * Callers:
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlSidDominates@12 @ 0x4B2D9420 (_RtlSidDominates@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __fastcall RtlpValidLabelSubjectContext(int a1, unsigned __int8 *a2, char a3, int *a4)
{
  int InformationToken; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+Ch] [ebp-B4h] BYREF
  __int16 v11; // [esp+10h] [ebp-B0h]
  unsigned __int8 v12; // [esp+17h] [ebp-A9h] BYREF
  _DWORD v13[5]; // [esp+18h] [ebp-A8h] BYREF
  void *Buf1; // [esp+2Ch] [ebp-94h] BYREF
  char v15[8]; // [esp+78h] [ebp-48h] BYREF
  int v16; // [esp+80h] [ebp-40h]

  v11 = 4096;
  v12 = 0;
  v10 = 0;
  RtlInitializeSid((int)v15, (int)&v10, 1u);
  v16 = 0x2000;
  if ( !a2 )
    a2 = (unsigned __int8 *)v15;
  InformationToken = ZwQueryInformationToken(a1, 25, (int)&Buf1, 76, (int)&v10);
  *a4 = InformationToken;
  if ( InformationToken < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(a2, v15, (char *)&v12) < 0 )
      return 0;
    if ( !v12 )
      a2 = (unsigned __int8 *)v15;
  }
  v7 = RtlSidDominates((unsigned __int8 *)Buf1, (char *)a2, (char *)&v12);
  *a4 = v7;
  if ( v7 < 0 )
    return 0;
  if ( !v12 )
  {
    v13[3] = 0;
    v13[4] = 0;
    v13[0] = 1;
    v13[1] = 1;
    v13[2] = 32;
    v8 = ZwPrivilegeCheck(a1, (int)v13, (int)&v12);
    if ( (v12 & (unsigned __int8)((v8 < 0) - 1)) == 0 )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
