/*
 * XREFs of KvfCommitFeatureStates @ 0x1403A5A1C
 * Callers:
 *     CmpAcceptBoot @ 0x140789790 (CmpAcceptBoot.c)
 * Callees:
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 */

int KvfCommitFeatureStates()
{
  int result; // eax
  HANDLE v1; // rbx
  OBJECT_ATTRIBUTES v2; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  *(&v2.Length + 1) = 0;
  memset(&v2.Attributes + 1, 0, 20);
  Handle = 0LL;
  v2.Length = 48;
  v2.RootDirectory = 0LL;
  v2.Attributes = 576;
  v2.ObjectName = (PUNICODE_STRING)&KvfVelocityKeyName;
  result = ZwCreateKey(&Handle, 0xC0000000, &v2, 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    v1 = Handle;
    result = KvfFeatureStates;
    if ( (KvfFeatureStates & 2) != 0 )
    {
      KvfFeatureStates &= ~2u;
      result = ZwSetValueKey(Handle, &stru_140C050C0, 0, 4u, &KvfFeatureStates, 4u);
    }
    if ( v1 )
      return ZwClose(v1);
  }
  return result;
}
