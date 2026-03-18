/*
 * XREFs of ?CaptureGlyphSet@QueryFontTreeRequest@@AAEXXZ @ 0x8D1AE
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontTreeRequest@@UAEXPAX@Z @ 0x8CD52 (-CaptureUsermodeParameters@QueryFontTreeRequest@@UAEXPAX@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z @ 0x8CDC4 (-ObtainKernelmodeAllocation@UmfdAllocation@@SGPAXW4FontDriverType@@KPAXIPA_NP6G_N11I@Z@Z.c)
 *     ?TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AAE_NPAK0@Z @ 0x8D33E (-TryProbeAndReadUserModeGlyphSet@QueryFontTreeRequest@@AAE_NPAK0@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z @ 0xD3290 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SGXPAX@Z.c)
 */

void __usercall QueryFontTreeRequest::CaptureGlyphSet(QueryFontTreeRequest *this@<ecx>, ULONG *a2@<esi>)
{
  QueryFontTreeRequest *v2; // edi
  char *v3; // ebx
  unsigned int v4; // ecx
  int *v5; // esi
  int (__thiscall **v6)(QueryFontTreeRequest *); // eax
  int v7; // eax
  char *v8; // esi
  char *v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  unsigned __int16 *v13; // eax
  unsigned int v14; // edi
  __int16 v15; // cx
  unsigned int v16; // ecx
  size_t v17; // [esp-10h] [ebp-40h]
  ULONG *v18; // [esp-4h] [ebp-34h]
  unsigned int v19; // [esp-4h] [ebp-34h]
  unsigned int *v20; // [esp+0h] [ebp-30h]
  int v22; // [esp+Ch] [ebp-24h]
  char *v23; // [esp+10h] [ebp-20h]
  unsigned int v24; // [esp+14h] [ebp-1Ch]
  char *v25; // [esp+18h] [ebp-18h]
  unsigned int v26; // [esp+20h] [ebp-10h] BYREF
  unsigned int v27; // [esp+24h] [ebp-Ch] BYREF
  unsigned int v28; // [esp+28h] [ebp-8h] BYREF
  char v29; // [esp+2Fh] [ebp-1h] BYREF

  v2 = this;
  v3 = (char *)*((_DWORD *)this + 13);
  if ( v3 )
  {
    v27 = 0;
    v28 = 0;
    if ( QueryFontTreeRequest::TryProbeAndReadUserModeGlyphSet(this, &v27, &v28) )
    {
      v4 = 8 * v28 + 16;
      v23 = &v3[v4];
      if ( &v3[v4] >= v3 + 16 && v27 >= v4 )
      {
        v18 = a2;
        v5 = (int *)*((_DWORD *)v2 + 10);
        v17 = v27;
        v6 = *(int (__thiscall ***)(QueryFontTreeRequest *))v2;
        v29 = 0;
        v7 = (*v6)(v2);
        v8 = UmfdAllocation::ObtainKernelmodeAllocation(
               v7,
               *v5,
               v3,
               v17,
               &v29,
               (int)QueryFontTreeRequest::TryGlyphSetHasSameContent);
        if ( v8 )
        {
          if ( !v29 )
            goto LABEL_7;
          v10 = v27;
          v11 = 0;
          v12 = v28;
          v24 = 0;
          *(_DWORD *)v8 = v27;
          *((_DWORD *)v8 + 3) = v12;
          v25 = &v3[v10];
          v26 = 0;
          if ( v12 )
          {
            v13 = (unsigned __int16 *)(v8 + 18);
            v27 = (unsigned int)(v8 + 18);
            do
            {
              v14 = *(_DWORD *)(v13 + 1);
              v15 = *v13;
              if ( v14 )
              {
                if ( !v15 )
                  goto LABEL_8;
                if ( v14 < (unsigned int)v23 )
                  goto LABEL_8;
                if ( v14 >= (unsigned int)v25 )
                  goto LABEL_8;
                v22 = *v13;
                if ( ULongLongToULong(4LL * *v13, v18) )
                  goto LABEL_8;
                if ( v14 > (unsigned int)v25 )
                  goto LABEL_8;
                v16 = v26;
                *(_DWORD *)(v27 + 2) = &v8[v14 - (_DWORD)v3];
                if ( (ULongAdd(v22, v16, (int *)&v26, v19, v20) & 0x80000000) != 0 )
                  goto LABEL_8;
                v13 = (unsigned __int16 *)v27;
                v12 = v28;
              }
              else if ( v15 )
              {
                goto LABEL_8;
              }
              v13 += 4;
              v27 = (unsigned int)v13;
              ++v24;
            }
            while ( v24 < v12 );
            v2 = this;
            v11 = v26;
          }
          if ( v11 == *((_DWORD *)v8 + 2) )
          {
LABEL_7:
            v9 = v8;
            v8 = 0;
            *((_DWORD *)v2 + 11) = v9;
          }
LABEL_8:
          if ( v8 )
            UmfdAllocation::ReleaseKernelmodeAllocation(v8);
        }
      }
    }
  }
}
