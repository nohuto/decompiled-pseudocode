/*
 * XREFs of sub_180021A3C @ 0x180021A3C
 * Callers:
 *     sub_180021710 @ 0x180021710 (sub_180021710.c)
 * Callees:
 *     sub_1800019A8 @ 0x1800019A8 (sub_1800019A8.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180021BB4 @ 0x180021BB4 (sub_180021BB4.c)
 *     sub_180021E3C @ 0x180021E3C (sub_180021E3C.c)
 */

__int64 __fastcall sub_180021A3C(int a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v8; // ebx
  int v9; // eax
  int v10; // ecx
  BOOL v11; // esi
  int v12; // edx
  int v13; // ecx
  _DWORD *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-28h] BYREF

  v18 = 0LL;
  v8 = sub_180021BB4(a1, a2, a3, a4, (__int64)&v18);
  if ( v8 >= 0 )
  {
    if ( a5 == 1 )
    {
      v13 = *(_DWORD *)(v18 + 12);
      *(_DWORD *)(v18 + 12) = 0;
      v12 = v13 != 0;
      v11 = 0;
LABEL_11:
      if ( v12 )
      {
        v14 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
        if ( *v14 > 4u )
        {
          v19 = a3;
          v20 = a2;
          LODWORD(v18) = a5 == 2;
          sub_1800019A8(
            (__int64)v14,
            (unsigned __int8 *)dword_18004638C,
            v15,
            v16,
            (void **)&v20,
            (__int64)&v19,
            (__int64)&v18);
        }
        v8 = sub_180021E3C((_DWORD)v14, a2, a3, a4, v11);
      }
LABEL_15:
      if ( v8 >= 0 )
        return (unsigned int)v8;
      goto LABEL_16;
    }
    if ( (unsigned int)(a5 - 2) > 1 )
      goto LABEL_15;
    v9 = *(_DWORD *)(v18 + 12);
    if ( a5 == 2 )
    {
      v10 = v9 + 1;
    }
    else
    {
      v10 = *(_DWORD *)(v18 + 12);
      if ( !v9 )
      {
LABEL_9:
        v11 = v10 != 0;
        v12 = v11 ^ (v9 != 0);
        goto LABEL_11;
      }
      v10 = v9 - 1;
    }
    *(_DWORD *)(v18 + 12) = v10;
    goto LABEL_9;
  }
LABEL_16:
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 2u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xCu, &stru_1800447D0, v8);
  }
  sub_180005724("CPickerHostContext::AddHostedAppInteractivityNotification", 212, v8);
  return (unsigned int)v8;
}
