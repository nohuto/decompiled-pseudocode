/*
 * XREFs of ??1BLTRECORD@@QAE@XZ @ 0x79466
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 */

void __thiscall BLTRECORD::~BLTRECORD(BLTRECORD *this)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 42);
  if ( (v2 & 0x20007) != 0 )
  {
    if ( ((unsigned int)&loc_20000 & v2) != 0 )
    {
      if ( *((_DWORD *)this + 12) )
      {
        DEC_SHARE_REF_CNT(*((_DWORD *)this + 12));
        v2 = *((_DWORD *)this + 42);
      }
      *((_DWORD *)this + 12) = 0;
    }
    if ( (v2 & 2) != 0 )
    {
      EXLATEOBJ::vAltUnlock((BLTRECORD *)((char *)this + 52));
      v2 = *((_DWORD *)this + 42);
    }
    if ( (v2 & 4) != 0 )
      RGNOBJ::vDeleteRGNOBJ((BLTRECORD *)((char *)this + 60));
  }
}
