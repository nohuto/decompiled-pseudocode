/*
 * XREFs of LdrQueryProcessModuleInformationEx @ 0x180001458
 * Callers:
 *     LdrQueryProcessModuleInformation @ 0x180001430 (LdrQueryProcessModuleInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D83D0 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformationEx(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned __int64 i; // rdi
  int v9; // r12d
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  _DWORD *v15; // [rsp+38h] [rbp-A0h]
  __int64 v16; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+50h] [rbp-88h] BYREF
  int v18; // [rsp+60h] [rbp-78h]
  __int64 v19; // [rsp+68h] [rbp-70h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h]
  _QWORD v21[12]; // [rsp+78h] [rbp-60h] BYREF
  _QWORD *v22; // [rsp+E0h] [rbp+8h]
  __int64 v23; // [rsp+E8h] [rbp+10h]

  v23 = a2;
  v22 = a1;
  v6 = 8;
  v21[0] = 0LL;
  v21[1] = LdrpProtectedCopyMemory;
  v21[2] = LdrpQueryInformationCurrentProcess;
  if ( a4 < 8 )
  {
    v7 = -1073741820;
    v15 = 0LL;
  }
  else
  {
    *a3 = 0;
    v15 = a3 + 2;
    v7 = 0;
  }
  if ( !a1 || (a2 & 2) != 0 )
    v22 = v21;
  for ( i = 0LL; ; ++i )
  {
    v17[1] = i;
    if ( i >= (unsigned __int64)(a2 & 1) + 1 )
      break;
    v9 = 10240;
    LODWORD(v10) = 1;
    if ( a5 )
      *a5 = v6;
    v20 = a2 & 2;
    if ( (a2 & 2) != 0 )
      off_18011DCA0[5 * i + 3]();
    v11 = ((__int64 (__fastcall *)(_QWORD *, _QWORD *, __int64 *))off_18011DCA0[5 * i])(v22, v17, &v19);
    if ( v11 < 0 )
      goto LABEL_25;
    if ( !v17[0] )
      goto LABEL_27;
    v11 = ((__int64 (__fastcall *)(_QWORD *, _QWORD, __int64 *))off_18011DCA0[5 * i + 1])(v22, v17[0], &v16);
    if ( v11 < 0 )
    {
LABEL_25:
      v7 = v11;
    }
    else
    {
      while ( 1 )
      {
        v12 = v16;
        if ( v16 == v17[0] )
          break;
        if ( !v9 )
        {
          v7 = -1073741271;
          break;
        }
        v18 = --v9;
        v6 += 296 * v10;
        LODWORD(v10) = 1;
        v13 = a4;
        if ( a4 < v6 )
        {
          v7 = -1073741820;
        }
        else
        {
          v11 = ((__int64 (__fastcall *)(_QWORD *, _DWORD *, __int64, __int64, __int64))off_18011DCA0[5 * i + 2])(
                  v22,
                  v15,
                  v16,
                  v19,
                  v23);
          if ( v11 < 0 )
            goto LABEL_25;
          v10 = *((_QWORD *)v15 + 2) != 0LL;
          v15 += 74 * v10;
          v21[3] = v15;
          v12 = v16;
          v13 = a4;
        }
        if ( a3 && v13 >= 0x130 )
          *a3 += v10;
        v11 = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64 *))off_18011DCA0[5 * i + 1])(v22, v12, &v16);
        if ( v11 < 0 )
          goto LABEL_25;
      }
    }
LABEL_27:
    if ( v20 )
      off_18011DCA0[5 * i + 4]();
    if ( a5 )
      *a5 = v6;
    LOBYTE(a2) = v23;
  }
  return v7;
}
