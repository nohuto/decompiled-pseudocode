/*
 * XREFs of ?SetBufferProperty@CParticleGeneratorMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01D90F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CParticleGeneratorMarshaler::SetBufferProperty(
        DirectComposition::CParticleGeneratorMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // r10d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // eax
  int v15; // eax
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  int v20; // eax
  int v21; // ecx

  v6 = 0;
  *a6 = 0;
  if ( a3 )
  {
    v8 = a3 - 1;
    if ( v8 )
    {
      v9 = v8 - 6;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 3;
              if ( v13 )
              {
                if ( v13 != 1 )
                  return (unsigned int)-1073741811;
                if ( a4 && a5 == 12 )
                {
                  *((_QWORD *)this + 23) = *(_QWORD *)a4;
                  v14 = a4[2];
                  *((_DWORD *)this + 4) |= 0x80000u;
                  *((_DWORD *)this + 48) = v14;
LABEL_34:
                  *a6 = 1;
                }
              }
              else if ( a4 && a5 == 12 )
              {
                *(_QWORD *)((char *)this + 172) = *(_QWORD *)a4;
                v15 = a4[2];
                *((_DWORD *)this + 4) |= 0x40000u;
                *((_DWORD *)this + 45) = v15;
                goto LABEL_34;
              }
            }
            else if ( a4 && a5 == 16 )
            {
              v16 = *(_OWORD *)a4;
              *((_DWORD *)this + 4) |= 0x8000u;
              *(_OWORD *)((char *)this + 148) = v16;
              goto LABEL_34;
            }
          }
          else if ( a4 && a5 == 16 )
          {
            v17 = *(_OWORD *)a4;
            *((_DWORD *)this + 4) |= 0x4000u;
            *(_OWORD *)((char *)this + 132) = v17;
            goto LABEL_34;
          }
        }
        else if ( a4 && a5 == 16 )
        {
          v18 = *(_OWORD *)a4;
          *((_DWORD *)this + 4) |= 0x2000u;
          *(_OWORD *)((char *)this + 116) = v18;
          goto LABEL_34;
        }
      }
      else if ( a4 && a5 == 16 )
      {
        v19 = *(_OWORD *)a4;
        *((_DWORD *)this + 4) |= 0x1000u;
        *(_OWORD *)((char *)this + 100) = v19;
        goto LABEL_34;
      }
    }
    else if ( a4 && a5 == 12 )
    {
      *(_QWORD *)((char *)this + 68) = *(_QWORD *)a4;
      v20 = a4[2];
      *((_DWORD *)this + 4) |= 0x40u;
      *((_DWORD *)this + 19) = v20;
      goto LABEL_34;
    }
  }
  else if ( a4 && a5 == 12 )
  {
    *((_QWORD *)this + 7) = *(_QWORD *)a4;
    v21 = a4[2];
    *((_DWORD *)this + 4) |= 0x20u;
    *((_DWORD *)this + 16) = v21;
    goto LABEL_34;
  }
  return v6;
}
