/*
 * XREFs of ?SPISetIconTitleFont@@YGHPAU_UNICODE_STRING@@PAUtagLOGFONTW@@H@Z @ 0x1452C0
 * Callers:
 *     ?xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z @ 0xD9DEC (-xxxSetSPIMetrics@@YGHPAU_UNICODE_STRING@@KPAXHPAH@Z.c)
 * Callees:
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _InvalidateKMDpiMetricsCacheDPIMETRICS@0 @ 0xDA4B0 (_InvalidateKMDpiMetricsCacheDPIMETRICS@0.c)
 *     _UserSetAltScaleFont@8 @ 0xDAC76 (_UserSetAltScaleFont@8.c)
 *     _CreateFontFromUserProfile@12 @ 0xDAD68 (_CreateFontFromUserProfile@12.c)
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __userpurge SPISetIconTitleFont@<eax>(
        INT *a1@<edx>,
        int a2@<ecx>,
        struct _UNICODE_STRING *a3,
        struct tagLOGFONTW *a4,
        int a5)
{
  int v5; // ebx
  INT *v6; // edi
  INT v7; // ecx
  INT v8; // eax
  INT v9; // esi
  INT v10; // eax
  INT *v11; // ecx
  struct HLFONT__ *FontFromUserProfile; // eax
  struct HLFONT__ *v13; // esi
  int v15; // eax
  int v16; // edi
  struct HLFONT__ *v17; // ecx
  struct HLFONT__ *v18; // ecx
  struct HLFONT__ *v20; // [esp+14h] [ebp-68h] BYREF
  INT *SessionDpiMetrics; // [esp+18h] [ebp-64h]
  _DWORD v22[23]; // [esp+1Ch] [ebp-60h] BYREF

  v5 = 0;
  v6 = a1;
  v20 = 0;
  SessionDpiMetrics = a1;
  v7 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 160);
  v8 = *(unsigned __int16 *)(_gpsi + 6242);
  if ( (_WORD)v7 != (_WORD)v8 )
  {
    v9 = v7;
    v10 = EngMulDiv(v6[1], v8, v7);
    v11 = SessionDpiMetrics;
    SessionDpiMetrics[1] = v10;
    v6 = SessionDpiMetrics;
    *SessionDpiMetrics = EngMulDiv(*v11, *(unsigned __int16 *)(_gpsi + 6242), v9);
  }
  FontFromUserProfile = CreateFontFromUserProfile(a2, v6, 154);
  v13 = FontFromUserProfile;
  if ( FontFromUserProfile )
  {
    if ( !UserSetAltScaleFont(FontFromUserProfile, (int *)&v20) )
    {
      GreMarkDeletableFont(v13);
      GreDeleteObject(v13);
      return 0;
    }
    if ( a3 )
    {
      if ( v6 )
      {
        memset(v22, 0, sizeof(v22));
        if ( GreExtGetObjectW(v13, 92, v22) )
          v5 = FastWriteProfileValue(a2, 23, 154, 3, v22, 92);
      }
      else
      {
        v5 = 1;
      }
      v15 = v5;
    }
    else
    {
      v15 = 1;
    }
    if ( v15 )
    {
      SessionDpiMetrics = (INT *)GetSessionDpiMetrics();
      v16 = Get96DpiMetrics();
      v17 = (struct HLFONT__ *)SessionDpiMetrics[12];
      if ( v17 )
      {
        GreMarkDeletableFont(v17);
        GreDeleteObject(SessionDpiMetrics[12]);
      }
      v18 = *(struct HLFONT__ **)(v16 + 48);
      if ( v18 )
      {
        GreMarkDeletableFont(v18);
        GreDeleteObject(*(_DWORD *)(v16 + 48));
      }
      SessionDpiMetrics[12] = (INT)v13;
      *(_DWORD *)(v16 + 48) = v20;
      InvalidateKMDpiMetricsCacheDPIMETRICS();
    }
    else
    {
      GreMarkDeletableFont(v13);
      GreDeleteObject(v13);
      GreMarkDeletableFont(v20);
      GreDeleteObject(v20);
    }
  }
  return v5;
}
