/*
 * XREFs of ?RegisterListener@SwitchItemFilteredCollection@@UEAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1803945F0
 * Callers:
 *     ?RegisterListener@SwitchItemFilteredCollection@@WKI@EAAJPEAUIObservableObjectArrayChanged@@PEAK@Z @ 0x1800FCDD0 (-RegisterListener@SwitchItemFilteredCollection@@WKI@EAAJPEAUIObservableObjectArrayChanged@@PEAK@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall SwitchItemFilteredCollection::RegisterListener(
        SwitchItemFilteredCollection *this,
        struct IObservableObjectArrayChanged *a2,
        unsigned int *a3)
{
  return ObservableObjectArray::RegisterListener(this, a2, a3);
}
