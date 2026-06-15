/*
 * XREFs of sub_180035970 @ 0x180035970
 * Callers:
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 * Callees:
 *     sub_1800331AC @ 0x1800331AC (sub_1800331AC.c)
 *     sub_180033378 @ 0x180033378 (sub_180033378.c)
 *     sub_180033580 @ 0x180033580 (sub_180033580.c)
 *     sub_180033834 @ 0x180033834 (sub_180033834.c)
 *     sub_1800338E0 @ 0x1800338E0 (sub_1800338E0.c)
 *     sub_180033B5C @ 0x180033B5C (sub_180033B5C.c)
 *     sub_180034970 @ 0x180034970 (sub_180034970.c)
 *     sub_180034A74 @ 0x180034A74 (sub_180034A74.c)
 *     sub_180034C58 @ 0x180034C58 (sub_180034C58.c)
 *     sub_180034D90 @ 0x180034D90 (sub_180034D90.c)
 *     sub_180035110 @ 0x180035110 (sub_180035110.c)
 *     sub_180035868 @ 0x180035868 (sub_180035868.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 *     memcpy @ 0x18003AE0F (memcpy.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall sub_180035970(__int64 a1, _QWORD *a2)
{
  void *v3; // r14
  unsigned int v4; // edi
  void *v5; // rax
  LSTATUS KeySecurity; // eax
  struct _ACL *v7; // r15
  __int64 v8; // rdx
  PSECURITY_DESCRIPTOR v9; // r15
  size_t SecurityDescriptorLength; // r12
  void *v11; // rax
  HANDLE ProcessHeap; // rax
  __int64 (__fastcall **v14)(); // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  void *v17; // [rsp+78h] [rbp-150h]
  _QWORD *v18; // [rsp+80h] [rbp-148h]
  _QWORD v19[2]; // [rsp+88h] [rbp-140h] BYREF
  char v20; // [rsp+98h] [rbp-130h]
  int v21; // [rsp+9Ch] [rbp-12Ch]
  __int128 v22; // [rsp+A0h] [rbp-128h]
  __int64 v23; // [rsp+B0h] [rbp-118h]
  int v24; // [rsp+B8h] [rbp-110h]
  _QWORD v25[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v26; // [rsp+D0h] [rbp-F8h]
  int v27; // [rsp+D4h] [rbp-F4h]
  __int128 v28; // [rsp+D8h] [rbp-F0h]
  __int64 v29; // [rsp+E8h] [rbp-E0h]
  int v30; // [rsp+F0h] [rbp-D8h]
  struct _SID_IDENTIFIER_AUTHORITY v31; // [rsp+100h] [rbp-C8h] BYREF
  _QWORD v32[16]; // [rsp+110h] [rbp-B8h] BYREF

  v18 = a2;
  cbSecurityDescriptor = 0;
  v3 = 0LL;
  v4 = 0;
  if ( RegGetKeySecurity(HKEY_CURRENT_USER, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v5 = (void *)sub_180039E78(cbSecurityDescriptor, &unk_18004FFC8);
    v3 = v5;
    v17 = v5;
    if ( v5 )
    {
      KeySecurity = RegGetKeySecurity(HKEY_CURRENT_USER, 4u, v5, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        v4 = (unsigned __int16)KeySecurity | 0x80070000;
        if ( KeySecurity <= 0 )
          v4 = KeySecurity;
      }
      else
      {
        v14 = off_18003F5C8;
        pSecurityDescriptor = 0LL;
        *(_DWORD *)v31.Value = 0;
        *(_WORD *)&v31.Value[4] = 1280;
        v25[1] = 0LL;
        v26 = 0;
        v27 = 2;
        v25[0] = &off_18003F648;
        v28 = 0LL;
        v29 = 0LL;
        v30 = 0;
        sub_180034970((__int64)&v14, v3);
        if ( pSecurityDescriptor )
          sub_180034C58((__int64)&v14, (__int64)v25);
        v7 = (struct _ACL *)sub_180033580((__int64)v25);
        sub_180035868(v7);
        v19[1] = 0LL;
        v20 = 0;
        v21 = 2;
        v19[0] = &off_18003F648;
        v22 = 0LL;
        v23 = 0LL;
        v24 = 0;
        sub_180033B5C((__int64)v19, v7);
        v8 = sub_1800331AC((__int64)v32, &v31, 6u, 80LL);
        LOBYTE(v7) = sub_1800338E0((__int64)v19, v8);
        sub_180033378(v32);
        if ( (_BYTE)v7 )
        {
          sub_180034A74((__int64)&v14, (__int64)v19);
          v9 = pSecurityDescriptor;
          if ( pSecurityDescriptor )
          {
            sub_180034D90((__int64)&v14);
            v9 = pSecurityDescriptor;
          }
          sub_180033834(v19);
          sub_180033834(v25);
          SecurityDescriptorLength = GetSecurityDescriptorLength(v9);
          v11 = (void *)sub_180039E78(SecurityDescriptorLength, &unk_18004FFC8);
          *a2 = v11;
          if ( v11 )
            memcpy(v11, v9, SecurityDescriptorLength);
          else
            v4 = -2147024882;
          v14 = off_18003F5C8;
          sub_180035110((__int64)&v14);
        }
        else
        {
          v4 = -2147467259;
          sub_180033834(v19);
          sub_180033834(v25);
          v14 = off_18003F5C8;
          sub_180035110((__int64)&v14);
        }
      }
    }
    else
    {
      v4 = -2147024882;
    }
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
  return v4;
}
