/*
 * XREFs of ?EngageDFx@DripsBlockerTrackingHelper@@QEAAX_N@Z @ 0x1C02BC29C
 * Callers:
 *     ?SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z @ 0x1C02BAD24 (-SetDFxEngaged@DXGGLOBAL@@QEAAXH@Z.c)
 * Callees:
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BB044 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z @ 0x1C02BC1E8 (-EnableEntryAccounting@DripsBlockerTrackingHelper@@IEAAXII_N@Z.c)
 *     ?ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x1C02BF218 (-ResetDAM@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 *     ?Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ @ 0x1C02BF278 (-Start@TimeInterval@DripsBlockerTrackingHelper@@QEAAXXZ.c)
 *     ?Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ @ 0x1C02BF2A8 (-Stop@TimeInterval@DripsBlockerTrackingHelper@@QEAA_KXZ.c)
 */

void __fastcall DripsBlockerTrackingHelper::EngageDFx(DripsBlockerTrackingHelper *this, char a2)
{
  unsigned int v3; // ebp
  char *v4; // rdi
  __int64 i; // rsi

  if ( !*((_BYTE *)this + 302128) )
  {
    if ( a2 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry(this);
      v3 = 0;
      v4 = (char *)this + 44;
      do
      {
        if ( v4[60] )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)v4; i = (unsigned int)(i + 1) )
          {
            if ( *(_DWORD *)&v4[72 * i + 100] )
            {
              DripsBlockerTrackingHelper::EnableEntryAccounting(this, v3, i, 0);
              *(_DWORD *)&v4[72 * i + 100] = 0;
            }
          }
        }
        ++v3;
        v4 += 4720;
      }
      while ( v3 < 0x40 );
      DripsBlockerTrackingHelper::TimeInterval::Start((DripsBlockerTrackingHelper *)((char *)this + 302104));
    }
    else
    {
      DripsBlockerTrackingHelper::TimeInterval::Stop((DripsBlockerTrackingHelper *)((char *)this + 302104));
    }
  }
  DripsBlockerTrackingHelper::ResetDAM(this);
}
