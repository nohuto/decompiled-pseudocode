/*
 * XREFs of ?bSpGetSpriteClipRgns@@YAHPEAUHDEV__@@AEAVRGNOBJAPI@@@Z @ 0x1C02818F8
 * Callers:
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027F0B8 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall bSpGetSpriteClipRgns(_QWORD *a1, struct RGNOBJAPI *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 i; // rdi
  struct RGNOBJ *v7; // r8
  _QWORD v9[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+20h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  if ( a1[12] )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
    v5 = a1[99];
    v11 = v5;
    if ( *(_QWORD *)a2 && v5 && v9[0] && v10[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)&v11);
      RGNOBJ::vSet((RGNOBJ *)v9);
      RGNOBJ::vSet((RGNOBJ *)v10);
      for ( i = a1[12]; ; i = *(_QWORD *)(i + 24) )
      {
        if ( !i )
        {
          RGNOBJAPI::bSwap(a2, (struct RGNOBJ *)&v11);
          v2 = 1;
          a1[99] = v11;
          break;
        }
        if ( (*(_DWORD *)i & 1) == 0 )
        {
          if ( *(_QWORD *)(i + 72) )
          {
            v12 = *(_QWORD *)(i + 184);
            if ( !v12 )
              continue;
            v7 = (struct RGNOBJ *)&v12;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)v10, (struct _RECTL *)(i + 80));
            v7 = (struct RGNOBJ *)v10;
          }
          if ( RGNOBJ::bMerge((RGNOBJ *)v9, (struct RGNOBJ *)&v11, v7, 0xEu) )
            RGNOBJ::vSwap((RGNOBJ *)&v11, (struct RGNOBJ *)v9);
          else
            RGNOBJ::vSet((RGNOBJ *)v9);
        }
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
  }
  return v2;
}
