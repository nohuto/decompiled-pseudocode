/*
 * XREFs of sub_180033B5C @ 0x180033B5C
 * Callers:
 *     sub_180034C58 @ 0x180034C58 (sub_180034C58.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180033378 @ 0x180033378 (sub_180033378.c)
 *     sub_180033438 @ 0x180033438 (sub_180033438.c)
 *     sub_180034200 @ 0x180034200 (sub_180034200.c)
 *     sub_180034504 @ 0x180034504 (sub_180034504.c)
 *     sub_1800360E0 @ 0x1800360E0 (sub_1800360E0.c)
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 *     sub_180036308 @ 0x180036308 (sub_180036308.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180033B5C(__int64 a1, struct _ACL *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  DWORD i; // r14d
  int v7; // r12d
  char *v8; // r15
  char *v9; // rbx
  char *v10; // rcx
  HANDLE v11; // rax
  LPVOID v12; // rax
  int v13; // r9d
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  HANDLE ProcessHeap; // rax
  LPVOID v17; // rax
  int v18; // r9d
  __int64 v19; // [rsp+48h] [rbp-100h]
  __int64 v20; // [rsp+48h] [rbp-100h]
  int v21; // [rsp+50h] [rbp-F8h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-E8h]
  PACL pAcl; // [rsp+68h] [rbp-E0h]
  LPVOID v25; // [rsp+70h] [rbp-D8h]
  LPVOID v26; // [rsp+78h] [rbp-D0h]
  DWORD pAclInformation[4]; // [rsp+80h] [rbp-C8h] BYREF
  _QWORD v28[9]; // [rsp+90h] [rbp-B8h] BYREF
  char v29; // [rsp+DCh] [rbp-6Ch]
  int v30; // [rsp+E0h] [rbp-68h]
  __int64 v31; // [rsp+E8h] [rbp-60h]
  __int64 v32; // [rsp+F0h] [rbp-58h]
  __int64 v33; // [rsp+F8h] [rbp-50h]
  __int64 v34; // [rsp+100h] [rbp-48h]

  v3 = a1;
  v23 = a1;
  pAcl = a2;
  if ( a2 )
  {
    v28[0] = off_18003F6E0;
    v29 = 0;
    v30 = 7;
    v31 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
    v32 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
    v33 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
    v34 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)()))off_18004F098[3])(&off_18004F098) + 24;
    _o_free(*(_QWORD *)(v3 + 8));
    *(_QWORD *)(v3 + 8) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation)
      || !GetAclInformation(a2, &v21, 4u, AclRevisionInformation) )
    {
LABEL_34:
      sub_180036308();
    }
    *(_DWORD *)(v3 + 20) = v21;
    for ( i = 0; ; ++i )
    {
      if ( i >= pAclInformation[0] )
        return sub_180033378(v28);
      if ( !GetAce(pAcl, i, &pAce) )
        goto LABEL_34;
      v7 = *((_DWORD *)pAce + 1);
      if ( *(_BYTE *)pAce <= 1u )
      {
        sub_180033438((__int64)v28, (char *)pAce + 8);
        try
        {
          ProcessHeap = GetProcessHeap();
          v17 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
          v26 = v17;
          if ( v17 )
          {
            LOBYTE(v18) = *((_BYTE *)pAce + 1);
            v14 = sub_180034200((_DWORD)v17, (unsigned int)v28, v7, v18, *(_BYTE *)pAce == 0);
          }
          else
          {
            v14 = 0LL;
          }
          v20 = v14;
        }
        catch ( ... )
        {
          v14 = v20;
          v3 = v23;
        }
      }
      else
      {
        if ( (unsigned __int8)(*(_BYTE *)pAce - 5) > 1u )
          continue;
        v8 = 0LL;
        v9 = 0LL;
        v10 = (char *)pAce + 44;
        if ( (*((_DWORD *)pAce + 2) & 1) != 0 )
          v8 = (char *)pAce + 12;
        else
          v10 = (char *)pAce + 28;
        if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
          v9 = (char *)pAce + (v8 != 0LL ? 28LL : 12LL);
        else
          v10 -= 16;
        sub_180033438((__int64)v28, v10);
        v11 = GetProcessHeap();
        v12 = HeapAlloc(v11, 0, 0xA8uLL);
        try
        {
          v25 = v12;
          if ( v12 )
          {
            LOBYTE(v13) = *((_BYTE *)pAce + 1);
            v14 = sub_180034504((_DWORD)v12, (unsigned int)v28, v7, v13, *(_BYTE *)pAce == 5, (__int64)v8, (__int64)v9);
          }
          else
          {
            v14 = 0LL;
          }
          v19 = v14;
        }
        catch ( ... )
        {
          v14 = v19;
          v3 = v23;
        }
      }
      if ( !v14
        || (v15 = *(_QWORD *)(v3 + 32), v15 >= *(_QWORD *)(v3 + 40))
        && !(unsigned __int8)sub_1800360E0(v3 + 24, v15 + 1) )
      {
        sub_18000A174(-2147024882);
      }
      *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8 * v15) = v14;
      ++*(_QWORD *)(v3 + 32);
    }
  }
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    sub_1800361E8(v4, *(_QWORD *)(v3 + 32));
    _o_free(*(_QWORD *)(v3 + 24));
    *(_QWORD *)(v3 + 24) = 0LL;
  }
  *(_QWORD *)(v3 + 32) = 0LL;
  *(_QWORD *)(v3 + 40) = 0LL;
  result = _o_free(*(_QWORD *)(v3 + 8));
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_BYTE *)(v3 + 16) = 1;
  return result;
}
