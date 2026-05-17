/*
 * XREFs of _RtlpWnfCalculateRetryTime@4 @ 0x4B33C30F
 * Callers:
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpWnfCalculateRetryTime(_DWORD *this)
{
  int result; // eax
  int *v2; // edx
  __int64 v3; // rdi
  int i; // [esp+10h] [ebp-4h]

  result = 1;
  v2 = (int *)this[11];
  v3 = 0LL;
  for ( i = 1; v2 != this + 11; v2 = (int *)*v2 )
  {
    if ( (v2[7] & 4) != 0 && v2[15] )
    {
      if ( !v3 || __PAIR64__(v3, HIDWORD(v3)) > *(_QWORD *)(v2 + 17) )
      {
        HIDWORD(v3) = v2[17];
        LODWORD(v3) = v2[18];
      }
      result = (unsigned int)v2[19] >= *(_DWORD *)(dword_4B3A664C + 44) ? i : 0;
      i = result;
    }
  }
  this[25] = v3;
  this[24] = HIDWORD(v3);
  this[26] = result;
  return result;
}
