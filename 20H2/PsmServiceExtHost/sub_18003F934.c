/*
 * XREFs of sub_18003F934 @ 0x18003F934
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 */

__int64 __fastcall sub_18003F934(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  unsigned int v5; // ecx

  v2 = *(_QWORD *)&qword_1800B41A8;
  v4 = sub_180046098(0x18uLL);
  v5 = 0;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = 0LL;
    *(_QWORD *)v4 = &off_18008D5E8;
    *(_DWORD *)(v4 + 8) = 1;
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
  {
    *(_QWORD *)(v4 + 16) = v2;
    *a2 = v4;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
