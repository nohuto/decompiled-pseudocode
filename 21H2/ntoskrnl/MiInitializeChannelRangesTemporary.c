/*
 * XREFs of MiInitializeChannelRangesTemporary @ 0x140A75154
 * Callers:
 *     MiInitNucleus @ 0x140A43F34 (MiInitNucleus.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 MiInitializeChannelRangesTemporary()
{
  __int64 result; // rax
  _QWORD *v1; // r8
  unsigned int v2; // r9d
  int v3; // r10d
  _BYTE *v4; // rdx
  unsigned int v5; // ecx
  unsigned int v6; // eax
  _BYTE *v7; // rax
  unsigned int v8; // r9d
  char *i; // r8
  unsigned int v10; // eax
  unsigned int v11; // r10d
  unsigned int v12; // edx
  unsigned int v13; // r11d
  int v14; // ebx
  char *v15; // r15
  unsigned int v16; // edi
  unsigned int v17; // ecx
  char *v18; // rdx
  __int64 j; // r9
  unsigned int v20; // edx
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  unsigned int v23; // ecx
  unsigned int v24; // r10d
  int v25; // ebx
  char *v26; // rsi
  unsigned int v27; // r9d
  unsigned int v28; // eax
  unsigned int v29; // edi
  unsigned int v30; // ecx
  char *v31; // rdx
  __int64 k; // r8
  unsigned int v33; // edx
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  unsigned int v36; // r8d
  unsigned int v37; // eax
  int v38; // r8d
  unsigned int v39; // eax
  unsigned __int16 *v40; // rdx
  _QWORD *v41; // [rsp+30h] [rbp-50h] BYREF
  _DWORD v42[4]; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-38h]
  _OWORD v44[2]; // [rsp+58h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v42[0] = 0;
  v41 = 0LL;
  memset(v44, 0, sizeof(v44));
  if ( dword_140CFB188 )
  {
    if ( byte_140C4EF1D != 1 )
    {
      if ( dword_140CFB19C )
      {
        v43 = 256;
        result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD **, _DWORD *))off_140C00A68[0])(31LL, 8LL, &v41, v42);
        v1 = v41;
        if ( v41 )
        {
          v2 = 0;
          v3 = 0;
          if ( *v41 == -1LL )
            goto LABEL_17;
          v4 = (char *)v41 + 14;
          do
          {
            v5 = *((unsigned __int16 *)v4 - 1);
            if ( v2 <= v5 )
              v2 = *((unsigned __int16 *)v4 - 1);
            if ( *v4 == 1 )
            {
              v3 = 1;
            }
            else
            {
              v6 = *((unsigned __int16 *)v4 - 2);
              if ( v6 < 0x40 && (unsigned __int16)v5 < 4u )
              {
                _bittestandset((signed __int32 *)v44, v5 + 4 * v6);
                v1 = v41;
              }
            }
            v7 = v4;
            v4 += 16;
            result = (v7 - (_BYTE *)v1 - 14) >> 4;
            dword_140C4DED4 = result;
          }
          while ( *(_QWORD *)(v4 - 14) != -1LL );
          if ( !v3 )
LABEL_17:
            v2 = 0;
          v8 = v2 + 1;
          MmNumberOfChannels = v8;
          if ( v8 != 1 )
          {
            if ( v8 > 4 )
            {
              for ( i = (char *)v1 + 12; *(_QWORD *)(i - 12) != -1LL; i += 16 )
              {
                if ( *(_WORD *)i >= 4u )
                {
                  v10 = *((unsigned __int16 *)i - 1);
                  if ( v10 < 0x40 )
                  {
                    v11 = 4 * v10;
                    v12 = v43 - 1;
                    v13 = v11 < v43 ? v11 : 0;
                    v14 = ((unsigned __int64)v44 & 4) != 0 ? 0x20 : 0;
                    v15 = (char *)v44 + (-(__int64)(((unsigned __int64)v44 & 4) != 0) & 0xFFFFFFFFFFFFFFFCuLL);
                    while ( 1 )
                    {
                      v42[1] = 0;
                      v16 = v14 + v12;
                      v17 = v14 + v13;
                      if ( v12 - v13 == -1 )
                        goto LABEL_27;
                      v18 = &v15[8 * ((unsigned __int64)v17 >> 6)];
                      for ( j = ~*(_QWORD *)v18 | ((1LL << (v17 & 0x3F)) - 1); j == -1; j = ~*(_QWORD *)v18 )
                      {
                        v18 += 8;
                        if ( v18 > &v15[8 * ((unsigned __int64)v16 >> 6)] )
                          goto LABEL_27;
                      }
                      _BitScanForward64(&v21, ~j);
                      v20 = v21 + ((unsigned int)((v18 - v15) >> 3) << 6);
                      if ( v20 > v16 )
                      {
LABEL_27:
                        v20 = -1;
                      }
                      else if ( v20 != -1 )
                      {
                        break;
                      }
                      if ( !v13 )
                        break;
                      v22 = v11 + 1;
                      if ( v11 + 1 > v43 )
                        v22 = v43;
                      v12 = v22 - 1;
                      v13 = 0;
                    }
                    v23 = v20 - v14;
                    if ( v20 == -1 )
                      v23 = -1;
                    if ( v23 < v11 || v23 >= v11 + 4 )
                    {
                      i[2] = 0;
                      *(_WORD *)i = 3;
                    }
                    else
                    {
                      *(_WORD *)i = v23 & 3;
                    }
                  }
                }
              }
              MmNumberOfChannels = 4;
            }
            v24 = 0;
            v25 = ((unsigned __int64)v44 & 4) != 0 ? 0x20 : 0;
            v26 = (char *)v44 - (-(__int64)(((unsigned __int64)v44 & 4) != 0) & 4);
            while ( 1 )
            {
              v27 = v24 < v43 ? v24 : 0;
              v28 = v43 - 1;
              while ( 1 )
              {
                v42[2] = 0;
                v29 = v25 + v28;
                v30 = v25 + v27;
                if ( v28 - v27 == -1 )
                  goto LABEL_49;
                v31 = &v26[8 * ((unsigned __int64)v30 >> 6)];
                for ( k = ~*(_QWORD *)v31 | ((1LL << (v30 & 0x3F)) - 1); k == -1; k = ~*(_QWORD *)v31 )
                {
                  v31 += 8;
                  if ( v31 > &v26[8 * ((unsigned __int64)v29 >> 6)] )
                    goto LABEL_49;
                }
                _BitScanForward64(&v34, ~k);
                v33 = v34 + ((unsigned int)((v31 - v26) >> 3) << 6);
                if ( v33 > v29 )
                {
LABEL_49:
                  v33 = -1;
                }
                else if ( v33 != -1 )
                {
                  break;
                }
                if ( !v27 )
                  break;
                v35 = v24 + 1;
                if ( v24 + 1 > v43 )
                  v35 = v43;
                v28 = v35 - 1;
                v27 = 0;
              }
              v36 = v33 - v25;
              if ( v33 == -1 )
                v36 = -1;
              if ( v36 == -1 || v36 < v24 )
                break;
              v24 = v36 + 1;
              v37 = v36;
              v38 = v36 & 3;
              v39 = v37 >> 2;
              if ( *v41 != -1LL )
              {
                v40 = (unsigned __int16 *)v41 + 6;
                do
                {
                  if ( *(v40 - 1) == v39 && *v40 == v38 )
                    *((_BYTE *)v40 + 2) = 0;
                  v40 += 8;
                }
                while ( *(_QWORD *)(v40 - 6) != -1LL );
              }
            }
            result = (__int64)v41;
            qword_140C4DF10 = v41;
          }
        }
      }
    }
  }
  return result;
}
