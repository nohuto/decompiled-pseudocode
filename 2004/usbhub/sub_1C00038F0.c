/*
 * XREFs of sub_1C00038F0 @ 0x1C00038F0
 * Callers:
 *     sub_1C0004C90 @ 0x1C0004C90 (sub_1C0004C90.c)
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000F4B0 @ 0x1C000F4B0 (sub_1C000F4B0.c)
 *     sub_1C00162A8 @ 0x1C00162A8 (sub_1C00162A8.c)
 *     sub_1C001C87C @ 0x1C001C87C (sub_1C001C87C.c)
 *     sub_1C0035284 @ 0x1C0035284 (sub_1C0035284.c)
 *     sub_1C0038858 @ 0x1C0038858 (sub_1C0038858.c)
 *     sub_1C003A1BC @ 0x1C003A1BC (sub_1C003A1BC.c)
 *     sub_1C003C654 @ 0x1C003C654 (sub_1C003C654.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 * Callees:
 *     sub_1C0002848 @ 0x1C0002848 (sub_1C0002848.c)
 *     sub_1C0004060 @ 0x1C0004060 (sub_1C0004060.c)
 *     sub_1C0007840 @ 0x1C0007840 (sub_1C0007840.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C002DC34 @ 0x1C002DC34 (sub_1C002DC34.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C00038F0(__int64 a1, void *a2, int a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  NTSTATUS v18; // r12d
  NTSTATUS v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  struct _KEVENT *v24; // r13
  __int64 Signalling; // r9
  _QWORD *v26; // r8
  UCHAR v27; // cl
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  _QWORD *v32; // rcx
  void *v33; // r13
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // rdx
  PVOID v41; // rax
  union _LARGE_INTEGER *v42; // rax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  __int64 v45; // r9
  volatile LONG Lock; // eax
  BOOLEAN v47; // r9
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  PVOID P; // [rsp+48h] [rbp-38h]
  union _LARGE_INTEGER v50; // [rsp+50h] [rbp-30h] BYREF
  __int64 v51; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v53; // [rsp+68h] [rbp-18h]
  PVOID v54; // [rsp+70h] [rbp-10h] BYREF
  PVOID v55; // [rsp+78h] [rbp-8h]
  int v57; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v50.QuadPart = 0LL;
  if ( (dword_1C006B268 & 8) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        HIBYTE(v57) = a4;
        LOBYTE(v57) = HIBYTE(a4);
        BYTE1(v57) = BYTE2(a4);
        BYTE2(v57) = BYTE1(a4);
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v57;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = v6;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000 * v6 + (int)(KeQueryTimeIncrement() - 1);
  v51 = v11;
  if ( (dword_1C006B268 & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  Timeout.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (dword_1C006B268 & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( !a5 )
    {
      v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
      goto LABEL_48;
    }
    v17 = a6;
    if ( a6 )
    {
      P = (PVOID)sub_1C0004060(a1, (int)a6 + 24, a6, 1465152371, 0);
      Object = a2;
      v53 = a6 + 496;
      v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      if ( v18 )
      {
        while ( 1 )
        {
          if ( v18 == 1 )
          {
            v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &v50);
            if ( !v18 )
              goto LABEL_35;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v11 - v14;
            v53 = a6 + 2464;
            v19 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v18 = v19;
            switch ( v19 )
            {
              case 0:
                goto LABEL_35;
              case 1:
                v20 = *(unsigned __int16 *)(a6 + 4);
                if ( (dword_1C006B268 & 0x200) != 0 )
                {
                  if ( a1 )
                  {
                    v21 = *(_QWORD *)(a1 + 64);
                    if ( v21 )
                    {
                      v22 = *(_QWORD *)(v21 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
                      *(_DWORD *)v22 = 1850889303;
                      *(_QWORD *)(v22 + 8) = 0LL;
                      *(_QWORD *)(v22 + 16) = a6;
                      *(_QWORD *)(v22 + 24) = v20;
                    }
                  }
                }
                *(_DWORD *)(a6 + 2844) = a5;
                if ( !a1 )
                  goto LABEL_79;
                v23 = *(_DWORD **)(a1 + 64);
                if ( !v23 )
                  goto LABEL_80;
                if ( *v23 != 541218120 )
                  sub_1C002DC78(a1, v23);
                if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
                  sub_1C002E188(DeviceObject->DeviceExtension, 0, 1, 57, (__int64)&unk_1C0062098, *(_WORD *)(a6 + 4));
                sub_1C0007840(a1, a6, 5, a6 + 24, 0LL, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_35;
            }
            v53 = a6 + 496;
          }
          else if ( v18 == 258 )
          {
            goto LABEL_35;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v18 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          if ( !v18 )
            goto LABEL_35;
        }
        v18 = 258;
      }
LABEL_35:
      if ( !a1 )
LABEL_79:
        sub_1C002DC78(0LL, 0LL);
      v24 = *(struct _KEVENT **)(a1 + 64);
      if ( !v24 )
LABEL_80:
        sub_1C002DC78(a1, 0LL);
      if ( v24->Header.LockNV != 541218120 )
        sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
      v24[142].Header.Type = 1;
      KeWaitForSingleObject(&v24[139], Executive, 0, 0, 0LL);
      Signalling = v24[142].Header.Signalling;
      v26 = P;
      v27 = v24[142].Header.Signalling;
      if ( (dword_1C006B268 & 0x10000) != 0 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 1667581000;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = v26;
          *(_QWORD *)(v29 + 24) = Signalling;
          v27 = v24[142].Header.Signalling;
        }
      }
      if ( v27 )
      {
        if ( v26 == (_QWORD *)1936941672 )
        {
          Lock = v24[130].Header.Lock;
          if ( Lock )
            v24[130].Header.LockNV = Lock - 1;
        }
        else if ( v26 )
        {
          v30 = v26[1];
          v31 = v26 + 1;
          if ( *(_QWORD **)(v30 + 8) != v26 + 1 || (v32 = (_QWORD *)v26[2], (_QWORD *)*v32 != v31) )
            __fastfail(3u);
          *v32 = v30;
          *(_QWORD *)(v30 + 8) = v32;
          v26[2] = v26 + 1;
          *v31 = v31;
          ExFreePoolWithTag(v26, 0);
        }
      }
      KeSetEvent(v24 + 139, 0, 0);
      goto LABEL_48;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 != 11 )
  {
    sub_1C000FD80(a1, 8, 2004112472, 0, 0LL);
    v33 = a2;
    v18 = KeWaitForSingleObject(a2, Executive, 0, v47, 0LL);
    goto LABEL_49;
  }
  v54 = a2;
  v41 = (PVOID)(v17 + 496);
  P = (PVOID)(v17 + 496);
LABEL_63:
  v55 = v41;
  do
  {
    v42 = (_DWORD)v6 ? &Timeout : 0LL;
    v43 = KeWaitForMultipleObjects(2u, &v54, WaitAny, Executive, 0, 0, v42, 0LL);
    v18 = v43;
    if ( !v43 )
      break;
    if ( v43 == 1 )
    {
      v18 = KeWaitForSingleObject(a2, Executive, 0, 0, &v50);
      if ( !v18 )
        break;
      v55 = (PVOID)(a6 + 2464);
      v44 = KeWaitForMultipleObjects(2u, &v54, WaitAny, Executive, 0, 0, 0LL, 0LL);
      v18 = v44;
      if ( !v44 )
        break;
      if ( v44 == 1 )
      {
        sub_1C000FD80(a1, 512, 1465143918, a6, *(unsigned __int16 *)(a6 + 4));
        sub_1C0002848(a1, v45 + 24, v45);
      }
      v41 = P;
      goto LABEL_63;
    }
  }
  while ( v43 != 258 );
LABEL_48:
  v33 = a2;
LABEL_49:
  v34 = MEMORY[0xFFFFF78000000008];
  if ( (dword_1C006B268 & 8) != 0 )
  {
    if ( a1 )
    {
      v35 = *(_QWORD *)(a1 + 64);
      if ( v35 )
      {
        v36 = *(_QWORD *)(v35 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
        *(_DWORD *)v36 = 844395639;
        *(_QWORD *)(v36 + 16) = (unsigned int)v34;
        *(_QWORD *)(v36 + 24) = SHIDWORD(v34);
        *(_QWORD *)(v36 + 8) = 0LL;
      }
    }
  }
  v37 = v34 - v14;
  if ( (dword_1C006B268 & 8) != 0 )
  {
    if ( a1 )
    {
      v38 = *(_QWORD *)(a1 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 2017809495;
        *(_QWORD *)(v39 + 16) = v18;
        *(_QWORD *)(v39 + 24) = (unsigned int)v37;
        *(_QWORD *)(v39 + 8) = 0LL;
      }
    }
  }
  if ( v18 == 258 )
  {
    if ( v37 < v11 )
    {
      sub_1C000FD80(a1, 8, 1465135393, HIDWORD(v37), (unsigned int)v37);
      sub_1C000FD80(a1, 8, 1465135649, HIDWORD(v51), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v18 = KeWaitForSingleObject(v33, Executive, 0, 0, &v50);
        if ( v18 )
          sub_1C002DC34(a1, a5, a6);
      }
    }
  }
  return (unsigned int)v18;
}
