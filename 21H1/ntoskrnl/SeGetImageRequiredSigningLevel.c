/*
 * XREFs of SeGetImageRequiredSigningLevel @ 0x1406DED08
 * Callers:
 *     MiValidateExistingImage @ 0x14063B24C (MiValidateExistingImage.c)
 *     MiCreateNewSection @ 0x140643004 (MiCreateNewSection.c)
 * Callees:
 *     RtlIsUntrustedObject @ 0x140315C50 (RtlIsUntrustedObject.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     SepRegQueryDwordValue @ 0x140677BB8 (SepRegQueryDwordValue.c)
 */

__int64 __fastcall SeGetImageRequiredSigningLevel(PVOID Object, unsigned int a2, char a3, char a4, char *a5)
{
  char v5; // bl
  unsigned int v6; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _KPROCESS *Process; // rcx
  char v16; // cl
  char v18; // [rsp+30h] [rbp-10h] BYREF
  char v19; // [rsp+31h] [rbp-Fh] BYREF
  BOOLEAN IsUntrustedObject[2]; // [rsp+32h] [rbp-Eh] BYREF
  int v21[3]; // [rsp+34h] [rbp-Ch] BYREF

  v5 = SeILSigningPolicy;
  v6 = 0;
  v21[0] = 0;
  v18 = 0;
  v19 = 0;
  IsUntrustedObject[0] = 0;
  if ( !SeILSigningPolicy )
    v5 = SeILSigningPolicyRuntime;
  SepRegQueryDwordValue(
    L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Control\\CI",
    (__int64)L"Disable26178932",
    v21);
  if ( qword_140C1DAD0 )
  {
    LOBYTE(v14) = a4;
    LOBYTE(v13) = a3;
    return (unsigned int)((__int64 (__fastcall *)(PVOID, _QWORD, __int64, __int64, char *))qword_140C1DAD0)(
                           Object,
                           a2,
                           v13,
                           v14,
                           a5);
  }
  if ( !v21[0] )
  {
    v5 = SeILSigningPolicy;
    if ( !SeILSigningPolicy )
      v5 = SeILSigningPolicyRuntime;
    if ( v5 == 2 && !a3 )
    {
      *a5 = 2;
      return v6;
    }
    if ( a3 == 2 )
    {
      if ( !v5 )
      {
        *a5 = 0;
        return v6;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_18;
    }
    if ( (a2 & 0x10) == 0 )
      goto LABEL_16;
LABEL_18:
    *a5 = a3;
    return v6;
  }
LABEL_16:
  if ( qword_140C1DAA0 )
  {
    LOBYTE(v11) = a3;
    LOBYTE(v12) = a4;
    if ( (unsigned int)qword_140C1DAA0(v12, v11) )
      goto LABEL_18;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (BYTE2(Process[2].Header.WaitListHead.Flink) & 7) != 0 || a3 != 6 )
    goto LABEL_18;
  if ( ((__int64)Process[2].ReadyListHead.Blink & 0x800000) != 0 )
    goto LABEL_37;
  if ( !qword_140C1DA98 )
    return (unsigned int)-1073741823;
  v6 = qword_140C1DA98(Object, &v18, &v19);
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  if ( v18 || v19 )
    goto LABEL_37;
  v6 = RtlIsUntrustedObject(0LL, Object, IsUntrustedObject);
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  if ( IsUntrustedObject[0] )
  {
LABEL_37:
    *a5 = 6;
    return v6;
  }
  if ( v21[0] )
  {
    v5 = SeILSigningPolicy;
    if ( !SeILSigningPolicy )
      v5 = SeILSigningPolicyRuntime;
  }
  if ( (unsigned __int8)v5 < 2u )
  {
    *a5 = 0;
  }
  else
  {
    v16 = 9;
    if ( v5 != 2 )
      v16 = 6;
    *a5 = v16;
  }
  return v6;
}
