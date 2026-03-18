/*
 * XREFs of _xxxPerformTargetingWithinPwnd@12 @ 0x17C0BC
 * Callers:
 *     _PerformTargetingWithinPwnd@12 @ 0x17B944 (_PerformTargetingWithinPwnd@12.c)
 * Callees:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _TouchTargetingCreateContact@16 @ 0x1B8BA5 (_TouchTargetingCreateContact@16.c)
 */

unsigned int __fastcall xxxPerformTargetingWithinPwnd(int a1, int *a2, unsigned int *a3)
{
  int v4; // edx
  unsigned int result; // eax
  int *v6; // ecx
  int *v7; // eax
  int *v8; // esi
  bool v9; // zf
  int v10; // edx
  unsigned int v11; // edx
  int *v12; // [esp+Ch] [ebp-124h]
  int v14; // [esp+18h] [ebp-118h] BYREF
  int v15; // [esp+1Ch] [ebp-114h]
  int v16; // [esp+20h] [ebp-110h]
  int v17; // [esp+24h] [ebp-10Ch]
  int v18; // [esp+28h] [ebp-108h] BYREF
  int v19; // [esp+2Ch] [ebp-104h]
  int v20; // [esp+30h] [ebp-100h]
  int v21; // [esp+34h] [ebp-FCh]
  int v22; // [esp+38h] [ebp-F8h] BYREF
  int v23; // [esp+3Ch] [ebp-F4h]
  int v24; // [esp+40h] [ebp-F0h]
  int v25; // [esp+44h] [ebp-ECh]
  int v26; // [esp+48h] [ebp-E8h]
  int v27; // [esp+4Ch] [ebp-E4h]
  int v28; // [esp+50h] [ebp-E0h]
  int v29; // [esp+54h] [ebp-DCh]
  int v30; // [esp+58h] [ebp-D8h]
  int v31; // [esp+5Ch] [ebp-D4h]
  int v32; // [esp+60h] [ebp-D0h]
  int v33; // [esp+64h] [ebp-CCh]
  _DWORD v34[49]; // [esp+68h] [ebp-C8h] BYREF

  v4 = (unsigned __int16)gatomPtrTargetFlags;
  *a3 = 0;
  a3[1] = 0;
  v12 = a2;
  result = (unsigned __int16)_GetProp(a1, v4, 1);
  if ( (unsigned __int16)result != 2 )
  {
    if ( (_WORD)result )
    {
      result = TouchTargetingEnabledForInput(a2[8], a2[9], a2 + 2);
      if ( result )
      {
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v17 = 0;
        v18 = 0;
        v19 = 0;
        v20 = 0;
        v21 = 0;
        memset(v34, 0, 192);
        if ( _GetDeviceRects(a2 + 2, &v14, &v18) )
        {
          _SetHimetricToPixelRatio(v14, v15, v16, v17, v18, v19, v20, v21, v34);
          v6 = &v14;
        }
        else
        {
          v6 = 0;
        }
        v22 = a2[3];
        v23 = a2[8];
        v24 = a2[9];
        v7 = a2 + 26;
        v25 = a2[26];
        v8 = a2 + 27;
        v26 = *v8++;
        v27 = *v8;
        v28 = v8[1];
        v29 = *v7;
        v9 = (v12[25] & 2) == 0;
        v30 = v7[1];
        v31 = v7[2];
        v32 = v7[3];
        v33 = v9 ? 0 : v12[34];
        result = TouchTargetingCreateContact(&v22, v6, 1, v34);
        if ( v34[44] )
        {
          if ( v34[45] )
          {
            v23 = v34[8];
            v24 = v34[9];
            v25 = v34[4];
            v26 = v34[5];
            v27 = v34[6];
            v28 = v34[7];
            v29 = v34[0];
            v30 = v34[1];
            v31 = v34[2];
            v32 = v34[3];
            v33 = v34[10];
            _InterlockedIncrement(&glSendMessage);
            v10 = xxxSendTransformableMessageTimeout(a1, 0x24Du, 0, (int)&v22, 0, 0, 0, 1u, 0);
            result = 4093;
            if ( ((v10 >> 20) & 0xFFFu) <= 0xFFD )
            {
              result = (v10 >> 10) & 0x3FF;
              *a3 = result;
              if ( result > 0x1FF )
              {
                result -= 1024;
                *a3 = result;
              }
              v11 = v10 & 0x3FF;
              a3[1] = v11;
              if ( v11 > 0x1FF )
              {
                result = v11 - 1024;
                a3[1] = v11 - 1024;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
