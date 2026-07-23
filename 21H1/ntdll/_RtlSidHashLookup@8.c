/*
 * XREFs of _RtlSidHashLookup@8 @ 0x4B347420
 * Callers:
 *     <none>
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

PSID_AND_ATTRIBUTES __cdecl RtlSidHashLookup(PSID_AND_ATTRIBUTES_HASH SidAttrHash, PSID Sid)
{
  __int16 *v2; // edx
  int v3; // eax
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // eax
  PSID_AND_ATTRIBUTES SidAttr; // edi
  _SID_AND_ATTRIBUTES *v10; // edi
  DWORD SidCount; // ebx
  int v12; // edi
  __int16 v13; // cx
  _SID_AND_ATTRIBUTES *i; // esi
  size_t v16; // [esp-4h] [ebp-28h]
  __int16 v17; // [esp+Ch] [ebp-18h]
  int v18; // [esp+10h] [ebp-14h]
  int v19; // [esp+14h] [ebp-10h]
  int v20; // [esp+18h] [ebp-Ch]
  int Size; // [esp+1Ch] [ebp-8h]
  char Size_7; // [esp+23h] [ebp-1h]

  if ( SidAttrHash )
  {
    v2 = (__int16 *)Sid;
    if ( Sid )
    {
      v3 = *((unsigned __int8 *)Sid + 1);
      Size = 4 * v3 + 8;
      v17 = *(_WORD *)Sid;
      v4 = *((unsigned __int8 *)Sid + 4 * v3 + 4);
      v6 = *((_DWORD *)SidAttrHash->Hash + (v4 & 0xF)) & *((_DWORD *)&SidAttrHash->Hash[8] + (v4 >> 4));
      v5 = v6 == 0;
      LOBYTE(v7) = 0;
      while ( 1 )
      {
        Size_7 = v7;
        if ( v5 )
          break;
        LOBYTE(v8) = v6;
        if ( (_BYTE)v6 )
        {
          SidAttr = SidAttrHash->SidAttr;
          v7 = (unsigned __int8)v7;
          v18 = (unsigned __int8)v7;
          do
          {
            v20 = (unsigned __int8)v8;
            v19 = (unsigned __int8)SidHashByteToIndexLookupTable[(unsigned __int8)v8];
            v10 = &SidAttr[v7 + v19];
            if ( *(_WORD *)v10->Sid == *v2 )
            {
              LODWORD(v16) = Size;
              if ( !memcmp(v2, v10->Sid, v16) )
                return v10;
              v2 = (__int16 *)Sid;
            }
            v8 = v20 ^ (1 << v19);
            SidAttr = SidAttrHash->SidAttr;
            v7 = v18;
          }
          while ( (_BYTE)v8 );
          LOBYTE(v7) = Size_7;
        }
        v6 >>= 8;
        LOBYTE(v7) = v7 + 8;
        v5 = v6 == 0;
      }
      SidCount = SidAttrHash->SidCount;
      v12 = 32;
      if ( SidAttrHash->SidCount > 0x20 )
      {
        v13 = *v2;
        for ( i = SidAttrHash->SidAttr + 32; ; ++i )
        {
          if ( *(_WORD *)i->Sid == v13 )
          {
            LODWORD(v16) = Size;
            if ( !memcmp(v2, i->Sid, v16) )
              return i;
            v13 = v17;
          }
          if ( ++v12 >= SidCount )
            return 0;
          v2 = (__int16 *)Sid;
        }
      }
    }
  }
  return 0;
}
