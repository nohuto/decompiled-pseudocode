/*
 * XREFs of _RtlpHpTlLogVAChange@16 @ 0x4B370AE6
 * Callers:
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpFreeVA@20 @ 0x4B378695 (_RtlpHpFreeVA@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

void __fastcall RtlpHpTlLogVAChange(int a1, int a2, int a3, int a4)
{
  int *v4; // eax
  char *v5; // edx
  int v6; // [esp+4h] [ebp-64h] BYREF
  int v7; // [esp+8h] [ebp-60h] BYREF
  int v8; // [esp+Ch] [ebp-5Ch] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+10h] [ebp-58h] BYREF
  int *v10; // [esp+30h] [ebp-38h]
  int v11; // [esp+34h] [ebp-34h]
  int v12; // [esp+38h] [ebp-30h]
  int v13; // [esp+3Ch] [ebp-2Ch]
  int *v14; // [esp+40h] [ebp-28h]
  int v15; // [esp+44h] [ebp-24h]
  int v16; // [esp+48h] [ebp-20h]
  int v17; // [esp+4Ch] [ebp-1Ch]
  int *v18; // [esp+50h] [ebp-18h]
  int v19; // [esp+54h] [ebp-14h]
  int v20; // [esp+58h] [ebp-10h]
  int v21; // [esp+5Ch] [ebp-Ch]

  switch ( a1 )
  {
    case 0x1000:
      if ( (unsigned int)dword_4B3A33F0 <= 5 )
        return;
      v6 = a2;
      v12 = 4;
      v16 = 4;
      v20 = 4;
      v5 = &byte_4B290F8F;
      goto LABEL_13;
    case 0x2000:
      if ( (unsigned int)dword_4B3A33F0 <= 5 )
        return;
      v6 = a2;
      v12 = 4;
      v16 = 4;
      v20 = 4;
      v5 = &byte_4B290E6F;
      goto LABEL_13;
    case 0x4000:
      if ( (unsigned int)dword_4B3A33F0 <= 5 )
        return;
      v6 = a2;
      v12 = 4;
      v16 = 4;
      v20 = 4;
      v5 = (char *)dword_4B290E38;
LABEL_13:
      v10 = &v6;
      v7 = a3;
      v14 = &v7;
      v8 = a4;
      v4 = &v8;
      goto LABEL_14;
  }
  if ( a1 == 0x8000 && (unsigned int)dword_4B3A33F0 > 5 )
  {
    v8 = a2;
    v10 = &v8;
    v7 = a3;
    v14 = &v7;
    v12 = 4;
    v16 = 4;
    v6 = a4;
    v4 = &v6;
    v20 = 4;
    v5 = (char *)&word_4B290F3A;
LABEL_14:
    v18 = v4;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    _tlgWriteTransfer_EtwEventWriteTransfer((int)&dword_4B3A33F0, (unsigned __int8 *)v5, 0, 0, 5u, &UserData);
  }
}
