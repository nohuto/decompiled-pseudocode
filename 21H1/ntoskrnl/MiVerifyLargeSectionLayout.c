/*
 * XREFs of MiVerifyLargeSectionLayout @ 0x140A604AC
 * Callers:
 *     MiCheckLargePageOk @ 0x140A60248 (MiCheckLargePageOk.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14027DAE0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall MiVerifyLargeSectionLayout(ULONG_PTR BugCheckParameter2)
{
  PIMAGE_NT_HEADERS v2; // rax
  unsigned int v3; // edx
  ULONG_PTR *v4; // r9
  unsigned int v5; // ebp
  int v6; // r10d
  PIMAGE_NT_HEADERS v7; // rdi
  int NumberOfSections; // r11d
  int v9; // r11d
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // eax
  int v13; // eax
  ULONG_PTR *result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v16[24]; // [rsp+40h] [rbp-28h] BYREF

  *(_OWORD *)BugCheckParameter3 = 0LL;
  memset(v16, 0, sizeof(v16));
  v2 = RtlImageNtHeader((PVOID)BugCheckParameter2);
  v3 = 0;
  v4 = BugCheckParameter3;
  v5 = 0x40000000;
  v6 = 0;
  v7 = v2;
  NumberOfSections = v2->FileHeader.NumberOfSections;
  BugCheckParameter3[1] = 0LL;
  *(_OWORD *)&v16[4] = 0LL;
  *(_DWORD *)&v16[20] = 0x40000000;
  v9 = NumberOfSections + 1;
  LODWORD(BugCheckParameter3[1]) = v2->OptionalHeader.SizeOfHeaders;
  *(_DWORD *)v16 = BugCheckParameter3[1];
  do
  {
    v10 = *((_DWORD *)v4 + 3);
    if ( v3 != v10 )
      KeBugCheckEx(0x1Au, 0x3030209uLL, BugCheckParameter2, *((unsigned int *)v4 + 3), v3);
    v11 = *((_DWORD *)v4 + 4);
    if ( v11 < *((_DWORD *)v4 + 2) )
      v11 = *((_DWORD *)v4 + 2);
    if ( !v11 )
      KeBugCheckEx(0x1Au, 0x303020AuLL, BugCheckParameter2, (ULONG_PTR)v4, 0LL);
    v3 = v10 + ((v11 + 4095) & 0xFFFFF000);
    v12 = v10 & 0x1FFFFF;
    if ( (*((_DWORD *)v4 + 9) & 0xE0000000) != v5 )
    {
      if ( v12 )
        KeBugCheckEx(0x1Au, 0x303020BuLL, BugCheckParameter2, (ULONG_PTR)v4, *((unsigned int *)v4 + 3));
      v5 = *((_DWORD *)v4 + 9) & 0xE0000000;
    }
    v13 = v12 != 0 ? v6 : 0;
    v6 = v13;
    if ( (*((_DWORD *)v4 + 9) & 0x2000000) != 0 )
    {
      v6 = 1;
    }
    else if ( v13 )
    {
      KeBugCheckEx(0x1Au, 0x303020CuLL, BugCheckParameter2, (ULONG_PTR)v4, 0LL);
    }
    result = BugCheckParameter3;
    if ( v4 == BugCheckParameter3 )
    {
      result = (ULONG_PTR *)v7->FileHeader.SizeOfOptionalHeader;
      v4 = (ULONG_PTR *)((char *)&v7->OptionalHeader.Magic + (_QWORD)result);
    }
    else
    {
      v4 += 5;
    }
    --v9;
  }
  while ( v9 );
  return result;
}
